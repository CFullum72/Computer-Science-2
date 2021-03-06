//Colin Fullum
//reading a text file
//9-19-19


#include <iostream>
#include <fstream>
#include "fileio.hpp"
//reads up to a space ch and prints everything up to it
void readUpToSpace(){
  std::ifstream file ("fileio-text.txt");
  if(!file.is_open()){
    std::cout << "Unable to open file" << std::endl;
    }
  char ch;
  file.get(ch);
  while(ch != ' '){
    std::cout << ch;
    file.get(ch);
  }  
  file.close();
  }

void addTwoNums(){
  std::ifstream file ("fileio-data-1.txt");
  if(!file.is_open()) {
    std::cout << "Unable to open file" << std::endl;
    }
  char ch;
  int num1;
  int num2;
  int total;
  file.get(ch);
  while (!file.eof() && ch != ';'){
    file >> num1;
    file.get(ch);
  }
  while (!file.eof() && ch != ';'){
    file >> num2;
    file.get(ch);
  }
  std::cout << "First Num:" << num1 << std::endl;
  std::cout << "Second Num:" << num2 << std::endl;
  total = num1 + num2;
  std::cout << "Total:" << total;
  file.close();
}
