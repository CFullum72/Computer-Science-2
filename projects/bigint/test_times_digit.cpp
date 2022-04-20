// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(40);

      // Test
      bi = bi.timesDigit(5);

      // Verify
      assert(bi == 200);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3333);

      // Test
      bi = bi.timesDigit(0);

      // Verify
      assert(bi == 0);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3333);

      // Test
      bi = bi.timesDigit(6);

      // Verify
      assert(bi == 19998);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(5555555);

      // Test
      bi = bi.timesDigit(9);

      // Verify
      assert(bi == 49999995);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi("888888888888888888");

      // Test
      bi = bi.timesDigit(8);

      // Verify
      assert(bi == "7111111111111111104");
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi("123456789101112");

      // Test
      bi = bi.timesDigit(3);

      // Verify
      assert(bi == "370370367303336");
    }

std::cerr << "done testing test_times_digit" << std::endl;
}
