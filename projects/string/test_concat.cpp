//  String class test program
//
//  Tests: operators + and +=
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
    String  str1 ("a");
    String  str2 ("bc");
    // TEST
    String result = str1 + str2;

    // VERIFY
    assert(str1    == "a");
    assert(str2   == "bc");
    assert(result == "abc");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1 ("abcd");
    String  str2 ("efgh");
   
    // TEST
    String result = str1 + str2;
    
    // VERIFY
    assert(str1   == "abcd");
    assert(str2   == "efgh");
    assert(result == "abcdefgh");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1 ("abcd");
    String  str2 ("something else");

    // TEST
      String result = str1 + str2;
         
    // VERIFY
    assert(str1   == "abcd");
    assert(str2   == "something else");
    assert(result == "abcdsomething else");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1 ("Colin ");
    String  str2 ("Fullum");

    // TEST
    String result = str1 + str2;
    
    assert(str1 == "Colin ");
    assert(str2 == "Fullum");
    assert(result == "Colin Fullum");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str1 ("Final");
    String  str2 ("+ Tests");

    // TEST
      String result = str1 + str2;
    
    
    // VERIFY
    assert(str1    == "Final");
    assert(str2   == "+ Tests");
    //assert(result == "Final+ Tests");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("Colin");

    // TEST
    String result("Fullum ");
    result += str ;
    
    // VERIFY
    assert(str    == "Colin");
     assert(result == "Fullum Colin");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("calafraglisticxpial");

    // TEST
    String result("super");
    result += str;
    
    // VERIFY
    assert(str    == "calafraglisticxpial");
    assert(result == "supercalafraglisticxpial");
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing concatination." << std::endl;
}
