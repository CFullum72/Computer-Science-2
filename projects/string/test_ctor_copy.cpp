//  String class test program
//
//  Tests: XXX
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

    // TEST
    String str1('X');
    String str2 = str1;
    // VERIFY
    assert(str2 == 'X');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String str1('X');
    String str2(str1);
    // VERIFY
    assert(str2 == 'X');
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing copy constructor." << std::endl;

}
