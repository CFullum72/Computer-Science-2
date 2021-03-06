//  String class test program
//
//  Tests: findchar(start, char) and findchar(char)
//  returns position of the character

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main (){
  {
    //-------------------------------
    //SETUP
    String str("findchar");

    //TEST
    assert(str.findch(0,'f') == 0);  
  }

  {
    //-------------------------------
    //SETUP
    String str("findadditionalchar");

    //TEST
    assert(str.findch(3,'i') == 7);
  }

  {
    //-------------------------------
    //SETUP
    String str("THE UNITED STATES OF AMERICA");

    //TEST
    assert(str.findch(5, 'E') == 8);
  }


  {
    //-------------------------------
    //SETUP
    String str("COLIN ROBERT FULLUM IS MY FULL NAME");

    //TEST
    assert(str.findch(10, 'F') == 13);
  }

  {
    //-------------------------------
    //SETUP
    String str("I AM HOPING THAT THESE TESTS ARE ACTUALLY WORKING, IF NOT I WILL BE SAD :(");

    //TEST
    assert(str.findch(20, 'Q') == -1);
  }

  {
    //-------------------------------
    //SETUP
    String str("I AM HOPING THAT THESE TESTS ARE ACTUALLY WORKING, IF NOT I WILL BE SAD :(");

    //TEST
    assert(str.findch(20, 'W') == 42);
  }





  std::cout << "done testing findchar" << std::endl;
}
