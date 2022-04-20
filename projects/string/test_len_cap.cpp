//  String class test program
//
//  Tests: length() and capacity()
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
  String a("potatos");
  assert(a.length() == 7);
  assert(a.capacity() == 7);
  }

  {
    String a("abcdefghigklmnopqrstuvwxyz");
    assert(a.length() == 26);
    assert(a.capacity() == 26);
  }

  {
    String a("A VERY LONG STRING THAT I AM USING FOR TEST 3");
    assert(a.length() == 45);
    assert(a.capacity() == 45);
  }

  {
    String a("potatospotatospotatospotatospotatospotatospotatospotatospotatospotatos");
    assert(a.length() == 70);
    assert(a.capacity() == 70);
  }


 
  std::cout << "Done testing Length and Capactiy." << std::endl;
}

