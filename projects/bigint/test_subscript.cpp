// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {

  {
    // Setup
    bigint bi(4);

    // Test
    int digit = bi[0];

    // Verify
    assert(bi    == 4);
    assert(digit == 4);
  }
  {
    // Setup
    bigint bi(1234);

    // Test
    int digit = bi[3];

    // Verify
    assert(bi    == 1234);
    assert(digit == 1);
  }
  {
    // Setup
    bigint bi(123456789);

    // Test
    int digit = bi[5];

    // Verify
    assert(bi    == 123456789);
    assert(digit == 4);
  }
  {
    // Setup
    bigint bi("777666998723");

    // Test
    int digit = bi[3];

    // Verify
    assert(bi    == "777666998723");
    assert(digit == 8);
  }
  {
    // Setup
    bigint bi("777666998124723465343");

    // Test
    int digit = bi[9];

    // Verify
    assert(bi    == "777666998124723465343");
    assert(digit == 4);
  }
  {
    // Setup
    bigint bi("2345678977743524666345453998124723465343");

    // Test
    int digit = bi[20];

    // Verify
    assert(bi    == "2345678977743524666345453998124723465343");
    assert(digit == 3);
  }
  {
    // Setup
    bigint bi("23456789777435246663454539981247234134234625665343");

    // Test
    int digit = bi[10];

    // Verify
    assert(bi    == "23456789777435246663454539981247234134234625665343");
    assert(digit == 3);
  }
  {
    // Setup
    bigint bi("4125467435897894759023456789777435246663454539981247234134234625665343");

    // Test
    int digit = bi[36];

    // Verify
    assert(bi    == "412546743589789475902345678977743524666345453998124723413423462566\
5343");
    assert(digit == 5);
  }




  std::cout << "Done testing subscript." << std::endl;
}

