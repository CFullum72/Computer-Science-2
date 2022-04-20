//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
  std::ifstream in("data1-2.txt");    // Define stream for input
  if(!in){                           // Make sure it opened correctly.
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  }

  bigint firstNum, secondNum, result;
  while(!in.eof()){
    in >> firstNum;
    in >> secondNum;
    if(in.eof()) break;

    std::cout << "The first number is: " << firstNum << std::endl;
    std::cout << "The second number is: " << secondNum << std::endl;

    result = firstNum * secondNum;

    std::cout << "The sum of the numbers is: " << result << std::endl;
  }
  in.close();

  return 0;
}


