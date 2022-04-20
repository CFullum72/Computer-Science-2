//
// tests: input operator <<
//
//

#include "string.hpp"
#include <iostream>
#include <cassert>


int main(){

  {
    //-----------------------------
    //SETUP
    String str1("STRING ONE");

    assert(str1.findstr(1, "RING") == 2); 

  }

  {
    //-----------------------------
    //SETUP
    String str1("welcome to the second test case!!!");

     assert(str1.findstr(5, "the") == 11);
  }

  {
    //-----------------------------
    //SETUP
    String str1("ABCDEFGhijklemoPQRSTUVWXYZ");

    assert(str1.findstr(4, "ijklemo") == 8);

  }

  {
    //-----------------------------
    //SETUP
    String str1("STRING ONE STRING TWO ");

    assert(str1.findstr(7, "STRING") == 11 );

  }

  std::cout << "Done testsing find string" << std::endl; 
}
