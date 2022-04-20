//
//Colin Fullum
//test_ctor_copy.cpp
//tests copy constructor
//November 3, 2019
//
////////////////////////////////////

#include "stack.hpp"
#include "string.hpp"
#include <iostream>
#include <cassert>

int main(){
  std::cout << "testing copy constructor" << std::endl;
  {
    //SETUP
    stack<int> st;
    //TEST
    st.push(1);
    stack<int> cpTest(st);
    //VERIFY
    assert(st.top()==cpTest.top());
  }
  {
    //SETUP
    stack<String> st;
    //TEST
    st.push("test");
    stack<String> cpStack(st);
    //VERIFY
    assert(st.top()==cpStack.top());
  }
  {
    //SETUP
    stack<String> st;
    //TEST
    st.push("abc");
    st.push("edf");
    st.push("ghi");
    stack<String> cpS(st);
    //VERIFY
    assert(st.top()==cpS.top());
  }
  std::cout << "done testing copy constructor" << std::endl;
}
