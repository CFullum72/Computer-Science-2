//////////////////////////////////////////
//Colin Fullum
//test_push_pop.cpp
//tests push, pop and top functions
//October 31, 2019
////////////////////////////////////////
////////////////////////////////////////


#include "stack.hpp"
#include "string.hpp"
#include <iostream>
#include <cassert>

int main(){
  std::cout << "testing Push and Pop" << std::endl;
   {
     //setup
     stack <int> test;
     //test
     test.push(1);
     //verify
     assert(test.empty() == false);
     assert(test.top()   == 1);
     
   } 
   {
     //setup
     stack <int> test;
     //test
     test.push(1);
     test.pop();
     test.push(10);
     test.push(100);
     test.pop();
     //verify
     assert (test.empty() == false);
     assert (test.top()   == 10);
   }
   {
     //setup
     stack <String> test;
     //test
     test.push("Colin");
     test.push("Fullum");
     //verify
     assert(test.empty() == false);
     assert(test.top  () == "Fullum");
   }
   {
     //setup
     stack <String> test;
     //test
     test.push("last test");
     test.pop();
     //verify
     assert(test.empty() == true);
   }
   
   std::cout << "done testing Push and pop \n";
}
