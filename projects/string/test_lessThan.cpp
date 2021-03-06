//  String class test program
//
//  Tests: operator<
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main(){
  {
    //--------------------------
    //SETUP
    String str1('a');
    String str2('b');


    //VERIFY
    assert(str1 < str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("abc");
    String str2("def");


    //VERIFY
    assert(str1 < str2);
  }


  {
    //--------------------------
    //SETUP
    String str1("Colin");
    String str2("ColinF");


    //VERIFY
    assert(str1 <  str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("Colin");
    String str2("colin");


    //VERIFY
    assert(str1 <  str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("ColinFullum");
    String str2("paterpillar");


    //VERIFY
    assert(str1 <  str2);
  }

  {
    //--------------------------
    //SETUP
    String str1("ColinFullumColinFullum");
    String str2("what a time to be alive");


    //VERIFY
    assert(str1 <  str2);
  }


  std::cout << "done testing LESS THAN  operator" << std::endl;
}
