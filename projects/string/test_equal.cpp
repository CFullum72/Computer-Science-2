//  String class test program
//
//  Tests: operator==
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main(){
  {
    //--------------------------
    //SETUP
    String str1('x');
    String str2('x');


    //VERIFY
    assert(str1 == 'x');
    assert(str2 == 'x');
    assert(str1 == str2);
  }

  {
    //--------------------------
    //SETUP
    char   str1('x');
    String str2("x");


    //VERIFY
    assert(str1 == 'x');
    assert(str2 == "x");
    assert(str1 == str2);
  }
  
  
  {
    //--------------------------
    //SETUP
    String str1("Colin");
    String str2("Colin");


    //VERIFY
    assert(str1 == "Colin");
    assert(str2 == "Colin");
    assert(str1 == str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("Colin");
    String str2("colin");


    //VERIFY
    assert(str1 == "Colin");
    assert(str2 == "colin");
    assert(str1 != str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("ColinFullum");
    String str2("ColinFullum");


    //VERIFY
    assert(str1 == "ColinFullum");
    assert(str2 == "ColinFullum");
    assert(str1 == str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("ColinFullumColinFullum");
    String str2("ColinFullumColinFullum");


    //VERIFY
    assert(str1 == "ColinFullumColinFullum");
    assert(str2 == "ColinFullumColinFullum");
    assert(str1 == str2);
  }


  std::cout << "done testing Equals operator" << std::endl;
}
