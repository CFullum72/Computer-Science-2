//Colin Fullum
//cpp file for bigint project
//9-11-2019

#include "bigint.hpp"
#include <cassert>


bigint::bigint(){
  for (int i = 0; i < CAPACITY; ++i)
    BIGINT_[i] = 0;
}

bigint::bigint (int b) : bigint(){
  int size = 0;
  num = b;
  int digit = 0;
  while (num !=0){
    digit = num % 10;
    BIGINT_[size] = digit;
    num /= 10;
    ++size;
  }
}


bigint::bigint(const char longNum[]) : bigint(){
    num = 0;
    int size = 0; //counts overall size of number
    int leadingZeros = 0; //counts what element the leading 0's end
    bool nlzFound = false; //nzFound stores if we are iterating over leading zeros.
    while (longNum[size] != '\0'){
      //as long as iterating over leading zeros, dont store that digit
      if (!nlzFound && longNum[size] == '0'){
	++leadingZeros; 
	++size;
	continue;
      }
      //since finding first non zero digit set the flag
      //so that all upcoming zeros should be stored in j_
      nlzFound = true;
      ++size;
    }
    //converting ascii value to integer and organizing the
    //digits into their respective places
    for (int i = size - 1; i > leadingZeros - 1; --i) {
      BIGINT_[num] = longNum[i] - '0';
      ++num;
    }
}

void bigint::debugPrint(std::ostream&) const{
   for (int i = CAPACITY -1; i >= 0; --i){
     if (i != '\0'){                      //if i is not an arbitrary value
       std::cout<< BIGINT_[CAPACITY] << " | "; //then print out the digits and a ' | ' character
      }
   }  
}

std::ostream& operator<< (std::ostream& out , const bigint& rhs){
   int i = CAPACITY - 1;
   while (rhs.BIGINT_[i] == '\0'){ //Skips all of the elements with arbitary values
      --i;
   }
   int characterCount = 0; //counts how many characters are on a line
   while(i >= 0){
     if(characterCount > 80){ //when there are 80 characters, return a line
       out << std::endl; 
       characterCount = 0;
      }

      ++characterCount;
      out << rhs.BIGINT_[i]; //print out that digit of the number
      --i;
   }
   return out;
}

bool bigint::operator==(const bigint& rhs)const {
  for(int i = 0; i < CAPACITY; ++i){
    if (BIGINT_[i] != rhs.BIGINT_[i]){ //if any digit of the two arrays are not equivalent
      return false;                  //return false
    }
  }
  return true; //otherwise return true
}

bigint bigint:: operator + (bigint const& rhs) const{
  bigint result;
  int sum = 0;
  int carry = 0;
  for (int i = 0; i < CAPACITY; ++i){
      sum = BIGINT_[i] + rhs.BIGINT_[i] + carry;
      result.BIGINT_[i] = sum % 10;
      carry = sum/10;
    }
  return result;
}

int bigint::operator [](int i){
  if(BIGINT_[i] >= 0 && BIGINT_[i] <= 9){
    return BIGINT_[i];
  }
  else {
    std::cout << "operation failed" << std::endl;
    return -1;
  }
}

std::istream& operator >> (std::istream& in, bigint& rhs){
  char digit;
  char number[CAPACITY];
  for(int i = 0; i <=CAPACITY; ++i){
    in >> digit;
    if (digit == ';'){
      number[i] = '\0';
      break;
    }
    if(digit == '\n') continue;
    number[i] = digit;
  }
  
  rhs = bigint(number);
  return in;

}

bigint bigint::timesDigit(int a) const{
  bigint result;
  int sum    = 0;
  int carry  = 0;
  for (int i = 0; i < CAPACITY; ++i){
    sum = BIGINT_[i] * a + carry;
    result.BIGINT_[i] = sum % 10;
    carry = sum/10;
  }
  return result;
}

bigint bigint::times10(int power) const{
  bigint temp;
  for (int i = 0; i < CAPACITY - power; ++i){
    temp.BIGINT_[i + power] = BIGINT_[i];
  }
  for (int i = 0; i < power; ++i){
    temp.BIGINT_[i] = 0;
  }
  return temp;
}

bigint bigint::operator * (bigint const& rhs)const{
  bigint product(0);
  bigint temp (0);
  for (int i = 0; i < CAPACITY - 1; ++i){
    temp = timesDigit(rhs.BIGINT_[i]);
    product = product + temp.times10(i);
  }
  return product;
}
