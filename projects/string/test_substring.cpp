//
// tests: substr(start, end)
//        finds substring from element start to element end
//
//
#include "string.hpp"
#include "iostream"
#include <cassert>


int main(){
  {
    //---------------------------------------
    //SETUP
    String str1("The Apple");

    //TEST
    String sub1 = str1.substr(4, 8);

   //VERIFY
   assert(str1 == "The Apple");
   assert(sub1 == "Apple");
 }

 {
  //---------------------------------------
  //SETUP
   String str1("The United States of America");
  //TEST
   String sub1 = str1.substr(8, 12);

  //VERIFY
   assert(str1 == "The United States of America");
   assert(sub1 == "ed St");
 }

 {
  //---------------------------------------
  //SETUP
   String str1("superman");
  //TEST
   String sub1 = str1.substr(6, 7);

  //VERIFY
   assert(str1 == "superman");
   assert(sub1 == "an");
 }
 
 {
   //---------------------------------------
   //SETUP
   String str1("Colin Fullum");
   //TEST
   String sub1 = str1.substr(7, 11);

   //VERIFY
   assert(str1 == "Colin Fullum");
   assert(sub1 == "ullum");
 }

 {
   //---------------------------------------
   //SETUP
   String str1("ajvnweiungrviwuehng0uhgpiuvbnw4iyutgbt1t2y3ui");
   //TEST
   String sub1 = str1.substr(10, 17);

   //VERIFY
   assert(str1 == "ajvnweiungrviwuehng0uhgpiuvbnw4iyutgbt1t2y3ui");
   assert(sub1 == "rviwuehn");
 }


   std::cout << "done tests substring" << std::endl;
 }





