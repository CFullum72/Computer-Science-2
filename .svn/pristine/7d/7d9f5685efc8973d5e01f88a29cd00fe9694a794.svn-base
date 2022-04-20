//
//
//Colin Fullum
//test_assign.cpp
//TESTS ASSIGNMENT OPERATOR (operator=)
//November 3, 2019
//
////////////////////////////////////

#include "stack.hpp"
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
  std::cout << "TESTING ASSIGNMENT OPERATOR" << std::endl;
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int> rhs;
    stack<int> lhs;
    rhs.push(10);
    rhs.push(15);
    lhs.push(100);
    lhs.push(150);
    //TEST
    lhs = rhs;
    //VERIFY
    assert(rhs.pop() == 15);
    assert(rhs.pop() == 10);
    assert(lhs.pop() == 15);
    assert(lhs.pop() == 10);
  }
  {
    stack<String> rhs;
    stack<String> lhs;
    rhs.push("abc");
    rhs.push("def");
    lhs.push("ghi");
    lhs.push("jkl");
    //TEST
    lhs = rhs;
    //VERIFY
    assert(rhs.pop() == "def");
    assert(rhs.pop() == "abc");
    assert(lhs.pop() == "def");
    assert(lhs.pop() == "abc");
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing assignment operator." << std::endl;

}
