// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
  { //1

        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {//2
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //3
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
      //4
      //------------------------------------------------------
      // Setup fixture
      bigint left(13);
      bigint right(89);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 13);
      assert(right  == 89);
      assert(result == 102);
    }
    {
      //5
      //------------------------------------------------------
      // Setup fixture
      bigint left(89);
      bigint right(13);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 89);
      assert(right  == 13);
      assert(result == 102);
    }
    {
      //6
      //------------------------------------------------------
      // Setup fixture
      bigint left(97);
      bigint right(83);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 97);
      assert(right  == 83);
      assert(result == 180);
    }
    {
      //7
      //------------------------------------------------------
      // Setup fixture
      bigint left(343);
      bigint right(200);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 343);
      assert(right  == 200);
      assert(result == 543);
    }
    {
      //8
      //------------------------------------------------------
      // Setup fixture
      bigint left(500);
      bigint right(13);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 500);
      assert(right  == 13);
      assert(result == 513);
    }
    {
      //9
      //------------------------------------------------------
      // Setup fixture
      bigint left(778);
      bigint right(356);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 778);
      assert(right  == 356);
      assert(result == 1134);
    }
    {
      //10
      //------------------------------------------------------
      // Setup fixture
      bigint left(1689);
      bigint right(8584);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1689);
      assert(right  == 8584);
      assert(result == 10273);
    }
    {
      //11
      //------------------------------------------------------
      // Setup fixture
      bigint left(15987);
      bigint right(95397);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 15987);
      assert(right  == 95397);
      assert(result == 111384);
    }
    {
      //12
      //------------------------------------------------------
      // Setup fixture
      bigint left(185987);
      bigint right(893797);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 185987);
      assert(right  == 893797);
      assert(result == 1079784);
    }
    {
      //13
      //------------------------------------------------------
      // Setup fixture
      bigint left(6500000);
      bigint right(9500000);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   ==  6500000);
      assert(right  ==  9500000);
      assert(result == 16000000);
    }
    {
      //14
      //------------------------------------------------------
      // Setup fixture
      bigint left("123456789101112");
      bigint right(100000);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "123456789101112");
      assert(right  ==           100000);
      assert(result == "123456789201112");
    }
    {
      //15
      //------------------------------------------------------
      // Setup fixture
      bigint left ("44444444444444444444444444");
      bigint right("55555555555555555555555555");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "44444444444444444444444444");
      assert(right  == "55555555555555555555555555");
      assert(result == "99999999999999999999999999");
    }
    {
      //16
      //------------------------------------------------------
      // Setup fixture
      bigint left ("5555555555555555555");
      bigint right("6666666666666666666");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "5555555555555555555");
      assert(right  == "6666666666666666666");
      assert(result == "12222222222222222221");
    }
       
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
}

