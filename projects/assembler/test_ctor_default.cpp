//
//Colin Fullum
//test_ctor_default.cpp
//tests default constructor
//November 3, 2019
//
/////////////////////////////

#include "stack.hpp"
#include "string.hpp"
#include <iostream>
#include <cassert>

int main () {
  std::cout << "testing the default constructor" << std::endl;
  {
    stack<int> test;
    assert(test.empty() == true); 
  }  
    
    
  {
    stack<int> test;
    assert(test.full() == false); 
  }
   


  {
    stack<String> test;
    assert(test.empty() == true); 
  }  
    
    
  {
    stack<String> test;
    assert(test.full() == false); 
  }
  
  std::cout << "done testing default constructor" << std::endl;

}
