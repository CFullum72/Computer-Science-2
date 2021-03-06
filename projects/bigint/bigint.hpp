//Header file for project 1
//Colin Fullum
//9-5-19
#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>

const int CAPACITY = 400;

class bigint {
public:
  bigint(); //default constructor
  bigint(int); //constructor, intializes a number that
              //is entered, ex.) bigint(128) 
  bigint(const char[]); //constructor, character
  
  friend std::ostream& operator<< (std::ostream&, const bigint&);
  friend std::istream& operator >> (std::istream&, bigint&);

  bigint operator + (bigint const&) const;
  bigint operator * (bigint const&) const;
  bigint timesDigit (int) const;
  bigint times10    (int) const;
  int operator []   (int);
  
   
  bool operator==(const bigint&)const;

  void debugPrint(std::ostream&) const;
     
private:
  int BIGINT_[CAPACITY];
  int num;
};

#endif //BIGINT_HPP_
