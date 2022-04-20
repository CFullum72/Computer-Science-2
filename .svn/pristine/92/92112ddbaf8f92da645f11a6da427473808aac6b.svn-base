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
        bi = bi.times10(1);

        // Verify
        assert(bi == 30);  
    }
    { //test one
      bigint x(746);
      int power = 2;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == 746);
      assert (power == 2);
      assert (result == 74600);
    }
    {   //test two
      bigint x   (623745);
      int power = 4;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == 623745);
      assert (power ==  4);
      assert (result == "6237450000");
    }
    { //test three
      bigint x   ("342534386545");
      int power = 20;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == "342534386545");
      assert (power ==  20);
      assert (result == "34253438654500000000000000000000");
    }
    { //test four
      bigint x   ("3325465476867942539879438654765");
      int power = 64;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == "3325465476867942539879438654765");
      assert (power ==  64);
      assert (result == "33254654768679425398794386547650000000000000000000000000000000000000000000000000000000000000000");
    }
    { //test five
      bigint x   ("3239853046517806325465476867942539879438654765");
      int power = 34;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == "3239853046517806325465476867942539879438654765");
      assert (power ==  34);
      assert (result == "32398530465178063254654768679425398794386547650000000000000000000000000000000000");
    }
    { //test six
      bigint x   ("3333333333333333333333333333333333333333333333333333333333");
      int power = 75;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == "3333333333333333333333333333333333333333333333333333333333");
      assert (power ==  75);
      assert (result == "3333333333333333333333333333333333333333333333333333333333000000000000000000000000000000000000000000000000000000000000000000000000000");
    }
    { //test seven
      bigint x   ("99999999999999999999999999999999999999999999999999999999999");
      int power = 100;

      //test
      bigint result = x.times10(power);

      //check
      assert (x == "99999999999999999999999999999999999999999999999999999999999");
      assert (power ==  100);
      assert (result == "999999999999999999999999999999999999999999999999999999999990000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }


    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
}

