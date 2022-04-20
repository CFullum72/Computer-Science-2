//  String class test program
//
//  Tests: Split function
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>
//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("My_Name_Is_Colin");
    std::vector<String> result;
    // TEST
    result = str.split('_');

    // VERIFY
    assert(result[0] == "My");
    assert(result[1] == "Name");
    assert(result[2] == "Is");
    assert(result[3] == "Colin");
    
    assert(result.size() == 4);
    std::cout << "first test passed" << std::endl;
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("This*is*test*2");
    std::vector<String> result;
    // TEST
    result = str.split('*');

    // VERIFY
    assert(result[0] == "This");
    assert(result[1] ==   "is");
    assert(result[2] == "test");
    assert(result[3] ==    "2");

    assert(result.size() == 4);
    std::cout << "second test passed" << std::endl;
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("What if I completed my third test ?");
    std::vector<String> result;
    // TEST
    result = str.split(' ');

    // VERIFY
    assert(result[0] == "What");
    assert(result[1] == "if");
    assert(result[2] == "I");
    assert(result[3] == "completed");
    assert(result[4] == "my");
    assert(result[5] == "third");
    assert(result[6] == "test");
    assert(result[7] == "?");
 
    assert(result.size() == 8);
    std::cout << "third test passed" << std::endl;

  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("The/fourth/test/will/be/my/next/to/last/test");
    std::vector<String> result;
    // TEST
    result = str.split('/');

    // VERIFY
    assert(result[0] == "The");
    assert(result[1] == "fourth");
    assert(result[2] == "test");
    assert(result[3] == "will");
    assert(result[4] == "be");
    assert(result[5] == "my");
    assert(result[6] == "next");
    assert(result[7] == "to");
    assert(result[8] == "last");
    assert(result[9] == "test");


    assert(result.size() == 10);
    std::cout << "fourth test passed" << std::endl;

  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("TheFifth-TestWill-Much Larger Strings");
    std::vector<String> result;
    // TEST
    result = str.split('-');

    // VERIFY
    assert(result[0] == "TheFifth");
    assert(result[1] == "TestWill");
    assert(result[2] == "Much Larger Strings");

    assert(result.size() == 3);
    std::cout << "final test passed" << std::endl;

  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "done testing split function" << std::endl; 
}
