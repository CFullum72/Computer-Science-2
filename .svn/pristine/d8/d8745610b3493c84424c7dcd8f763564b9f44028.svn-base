//
// tests: input operator <<
//
//
#include "string.hpp"
#include <iostream>
#include <fstream>
#include <cassert>
int main(){
  std::fstream file("file.txt");
  String str;

  file >> str;

  assert(str == "hello,");

  file >> str;
 
  assert(str == "my");

  file >> str;

  assert(str == "name");

  file >> str;
  
  assert(str ==  "is");

  file >> str;

  assert(str ==  "file");



  std::cout << "done testing input operator" << std::endl;
}
