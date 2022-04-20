#ifndef CS2_ASSEMBLER_UTIL
#define CS2_ASSEMBLER_UTIL
//
//Colin Fullum
//utilities.hpp
//hpp file for utilities
//November 5, 2019
//
////////////////////////////////////

#include "stack.hpp"
#include "string.hpp"
#include <iostream>
#include <cassert>
#include <fstream>
#include <vector>
///////////////////////////////////////////////////////
// converts an infix expression to a postfix expression
// i.e. (2 + 3) -> 23+
void infix2postfix(std::istream&, std::ostream&);
void toAssembly(std::ifstream&, std::ostream&);

String intToString(int);
String getOp(const String&);
bool isOp(String&);


#endif
