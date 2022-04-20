//
// Colin Fullum
// assembler.cpp
// driver file for the toAssembler funciton
// November 17 2019
//
//////////////////////////////////////////////////

#include "utilities.hpp"
#include <fstream>

int main(int argc, char const* argv[]){
  if (argc < 2){
    std::cerr << "No input file, please specify a file to read";
    return -1;
  }

  std::ifstream infixFile(argv[1]);
  
  if (!infixFile){
    std::cerr << "Specified infix file could not be opened" << std::endl;
    return -2;
  }
  
  String infix;
  while(!infixFile.eof()){
    //output the infix expression
    infixFile >> infix;
    std::cout << "Infix expression: " << infix << std::endl;
    
    //output the postfix expression
    std::cout << "Postfix exprsion: ";
    infix2postfix(infixFile, std::cout);
    std::cout << std::endl; 

    //output the assembly expression
    // std::cout << "Assembly expression: ";
    //toAssembly(infixFile, std::cout);  
  }

  infixFile.close();

  return 0;
}
