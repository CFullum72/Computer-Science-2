//Colin Fullum
//string.cpp
//Project 2 String class implementation
//
//October 7, 2019

#include "string.hpp"


//////////////////////////////////////////////
//                                          //
//              CONSTRUCTORS                //
//                                          //
//////////////////////////////////////////////

String::String(){ //deafult constructor
  str = new char[1];
  str[0] = '\0';
  stringSize = 1;
}

String::String(char ch) { //single character constructor
  str = new char [2];     //create a new array at str[0] and str[1]
  str[0] = ch;            
  str[1] = '\0';             //NULL terminator
  stringSize = 2;
}


//REQUIRES: str.length < capacity()
String::String(const char ch[]) { //string of characters contructor
  int pos = 0;     //tracks position in character array
  
  while(ch[pos] != 0){ //finds the size of the character array
    ++pos;
  }
  
  str = new char [pos +1];
  stringSize = pos + 1;


  for(int i = 0; i < pos + 1; ++i){
    str[i] = ch[i];
  }
  str[pos] = '\0';
}

///////////////////////////////////////////
//                                       //
//          PRIVATE AND HELPER           //        
//                METODS                 //
//                                       //
///////////////////////////////////////////

String::String(int newSize){ //new size, int constructor
  stringSize = newSize + 1;
  str = new char[newSize + 1];
  str[newSize] = '\0';
 }

//new size and new char array 
//String str(newsize, chararray[])
String::String(int newSize, const char rhs[]){
  stringSize = newSize + 1;
  str = new char[newSize + 1];
  str[newSize] = 0;
  for(int i = 0; i < newSize; ++i){
    if(rhs[i] == 0) break;
    str[i] = rhs[i];
  }
}

void String::resetCapacity(int newSize){
  String temp(newSize, str);
  swap(temp); 
} 

void String::swap(String& rhs){

  //Swap the String Sizes
  int tempStrSize =     stringSize;
  stringSize      = rhs.stringSize;
  rhs.stringSize  =    tempStrSize;

  //Swap the contents of the Strings
  char *temp =     str;
  str        = rhs.str; 
  rhs.str    =    temp;
}
//////////////////////////////////////////////
//                                          //
//            LENGTH AND CAPACITY           //
//                                          //
//////////////////////////////////////////////

int String::capacity() const{
  return stringSize - 1;
}

int String::length() const{
  int size = 0; 
  while(str[size] != 0){
    ++size; //keeps track of the size of the String
  }
  return size; //then reutrns it
}

//////////////////////////////////////////////
//                                          //
//              THE BIG THREE               //
//                                          //
//////////////////////////////////////////////


//copy constructor
String::String(const String& rhs) : String(rhs.capacity()){
  for(int i = 0; i < capacity(); ++i){
    str[i] = rhs.str[i];
  }
}

//destructor
String::~String(){
  delete [] str;
}

//Assignment operator(operator= overload)
String& String::operator=(String rhs){
  swap(rhs);
  return *this;
}


//////////////////////////////////////////////
//                                          //
//             FIND FUNCTIONS               //
//                                          //
//////////////////////////////////////////////


String String::substr(int start, int end)const{
  if (start < 0)        return String();
  if (start > end)      return String();
  
  if (end >= length()) end = length() - 1;

  String result(end - start + 2);
  int i = start;

  while ((i <= end) && (str[i] != '\0')) {
     result.str[i-start] = str[i];
     ++i;
  }
  result.str[i-start] = 0;
  return result;
}



//find character
int String::findch(int startPos, char ch) const{
  for(int i = startPos; i < length(); ++i){
    if(str[i] == ch) { //if str[i] = ch, return i
      return i; 
    }
  }
  return -1; //return -1 if ch is not found
}


//find substr
int String::findstr(int startPos, const String& rhs) const{
  if(length() >= rhs.length()){
    for(int i = startPos, offset = 0; i < length(); ++i, offset = 0){
      while(str[i + offset] == rhs.str[offset] && offset <= rhs.length()){
	++offset;

        if(offset == rhs.length()) {
          return i;
        }//end of if (j == rhs...
      }//end of while loop
    }//end of for loop
  }//end of if(length()...
  return -1; //was not found
}//end of method

//////////////////////////////////////////////
//                                          //
//               SUBSCRIPTS                 //
//                                          //
//////////////////////////////////////////////


//accessor for non const objects
char& String::operator[](int i){
  /*  if(i < 0)         return -1;
  if(i > stringSize)return -2;
  */
  return str[i];
}

//accessor for const objects
char String::operator[](int i) const{
  //if(i < 0)         return -1;
  //if(i > stringSize)return -2;

  return str[i];
}

//////////////////////////////////////////////
//                                          //
//              RELATIONAL                  //
//              OPERATORS                   //
//                                          //
//////////////////////////////////////////////

bool String::operator== (const String& rhs) const{
  int pos = 0;
  while((str[pos] != '\0') && (str[pos] == rhs.str[pos])) ++pos;
  return str[pos] == rhs.str[pos];
}

bool operator == (char lhs, const String & rhs)         { return String(lhs) == rhs; }
bool operator == (const char lhs[], const String & rhs) { return String(lhs) == rhs; }
bool operator != (const String& lhs, const String & rhs){ return      !(lhs == rhs); }


bool String::operator<(const String& rhs) const{
  int pos = 0;
  while((str[pos] != '\0') &&(rhs.str[pos] != '\0') && (str[pos] == rhs.str[pos])) ++pos;
  return str[pos] <  rhs.str[pos];
}

bool operator <  (char lhs,          const String & rhs) { return  String (lhs) < rhs; }
bool operator < (const char lhs[],  const String & rhs)  { return   String (lhs) < rhs; }

bool operator > (const String& lhs, const String & rhs)  { return !((lhs == rhs) || (lhs < rhs)); }


bool operator <= (const String& lhs, const String & rhs)  { return (lhs == rhs) || (lhs < rhs); }
bool operator >= (const String& lhs, const String & rhs)  { return (lhs == rhs) || (lhs > rhs); }


//////////////////////////////////////////////
//                                          //
//              INPUT AND OUTPUT            //
//                                          //
//////////////////////////////////////////////

std::ostream& operator<<(std::ostream& out, const String& rhs){
  out << rhs.str;
  return out;
}

std::istream& operator >>(std::istream& in, String& rhs){
  char BUFFER[2000];
  if(!in.eof()) rhs = String();
  String tmp(BUFFER);
  rhs = tmp;
  return in;
}



//////////////////////////////////////////////
//                                          //
//               CONCATINATION              //
//                                          //
//////////////////////////////////////////////

String String::operator+(const String& rhs) const{
  int offset = length();
  String result(offset + rhs.length(), str);

  for(int i = 0; rhs[i] != 0; ++offset, ++i){
    result[offset] = rhs[i];
  }
  result[offset] = '\0';
  return result;
}

String operator + (char lhs, const String& rhs)         { return String(lhs) + rhs; } 
String operator + (const char lhs[], const String& rhs) { return String(lhs) + rhs; }


String& String::operator +=(const String& rhs){
  *this = operator+(rhs);
   return *this;
}

///////////////////////////////////////
//                                   //
//             SPLIT                 //
//                                   //
///////////////////////////////////////

std::vector<String> String::split(char ch) const {
  int start = 0;
  int end   = 0;
  std::vector<String> result;

  while(end != -1){
    end =  findch(start, ch);
    
    if(end == start){
       result.push_back("");
    }
    else if(end != -1){
      result.push_back(substr(start, end - 1));
    }
    if(end == -1){
      result.push_back(substr(start, length() - 1));
    }
    start = end + 1;
  }//end of while loop
  return result;
  //REGRADE
}


/////////////////////////////////////////
//                                     //
//           CONVERT TO INT            //
//                                     //
/////////////////////////////////////////

int String::to_int()
{
  int start = length() - 1;

  if (str[start] == '-') {
    return 0;
  }
  
  int value = 0,
    tensPlace = 1;
  
  for (int i = start; i >= 0; --i) {
    value += (int(str[i] - int('0')) * tensPlace);
    tensPlace *= 10;
  }
  
  return value;
}
