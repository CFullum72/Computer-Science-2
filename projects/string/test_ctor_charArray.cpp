//  String class test program
//
//  Tests: Character Array Constructor, String a("xyz"), uses ==
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
    String  str("test 1");

    // VERIFY
    assert(str == "test 1");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("This is test 2");

    // VERIFY
    assert(str == "This is test 2");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("Time to do the third test");

    // VERIFY
    assert(str == "Time to do the third test");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("Time to conduct test number four, also known as test 4");

    // VERIFY
    assert(str == "Time to conduct test number four, also known as test 4");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str("This test is not only the final test, test number five, and test 5, but is also the longest test!");

    // VERIFY
    assert(str == "This test is not only the final test, test number five, and test 5, but is also the longest test!");
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing character Array Constructor." << std::endl;

}
