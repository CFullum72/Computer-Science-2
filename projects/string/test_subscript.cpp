//  String class test program
//
//  Tests: operator []
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("hello");
    int i = 2;
    

    // VERIFY
    assert(str[i] == 'l');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("hellopauvpibqrfipgbqaiperfb");
    int i = 7;


    // VERIFY
    assert(str[i] == 'u');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("What if I did the test 3");
    int i = 5;


    // VERIFY
    assert(str[i] == 'i');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("abcdefghijklmnopqrstuvwxyz");
    int i = 25;


    // VERIFY
    assert(str[i] == 'z');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("abcdefghijklmnopqrstuvwxyzywaijvbnqeiubrgpqanfpoiqpehuiq97632t948712349ujiqngiup");
    int i = 30;


    // VERIFY
    assert(str[i] == 'j');
  }





  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing Subscript." << std::endl;
}
