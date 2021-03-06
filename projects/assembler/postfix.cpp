//
// Colin Fullum
// postfix.cpp
// main file for postfix function
// November 10, 2019
//
/////////////////////////////////////////////

#include "utilities.hpp"

int main(int argc, char const* argv[])
{
  // If input file isn't present, tell user and exit
  if (argc < 2) {
    std::cerr << "No input file present!" << std::endl;
    return -1;
  }

  // Open the infix file
  std::ifstream infix_file(argv[1]);

  // If no infix file, show the infix file could not be opened and exit
  if (!infix_file) {
    std::cerr << "Infix file could not be opened!" << std::endl;
    return -2;
  }

  std::ofstream postfix_file(argv[2]);

  // If these is no argv[2], print to console
  if (!postfix_file) {
    infix2postfix(infix_file, std::cout);
  }
  else{ //else print to specified file
    infix2postfix(infix_file, postfix_file);
  }
  infix_file.close();
  postfix_file.close();

  return 0;
}

