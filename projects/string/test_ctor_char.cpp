//  String class test program
//
//  Tests: character constructor, String('x'), uses ==
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
    String  str('X');

    // VERIFY
    assert(str == 'X');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('y');

    // VERIFY
    assert(str == 'y');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str(' ');

    // VERIFY
    assert(str == ' ');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('1');

    // VERIFY
    assert(str == '1');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str(';');

    // VERIFY
    assert(str == ';');
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing character constructor." << std::endl;

}
