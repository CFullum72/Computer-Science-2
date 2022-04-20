//
//Colin Fullum
//utilities.cpp
//contains free functions for assembler project
//November 10, 2019
//
///////////////////////////////////////////////

#include "utilities.hpp"
#include <fstream>

void infix2postfix(std::istream& in, std::ostream& out){
  stack<String> s;
  String lhs,
    rhs,
    op,
    currentToken;
  char token[300];

  while (!in.eof()) {
    in >> token;
    currentToken = String(token);

    if (in.eof()) {
      break;
    }

    if (currentToken == ";") {
      out << s.top();
      out << ";";
      out << std::endl;
      s = stack<String>();
    } else if (currentToken == ")") {
      rhs = s.pop();
      op = s.pop();
      lhs = s.pop();
      s.push(lhs + rhs + op);
    } else {
      if (currentToken != "(") {
	s.push(currentToken + ' ');
      }
    }
  }//end of while loop
}

void toAssembler(std::ifstream& in, std::ofstream& out){
  stack<String> s;
  String token, lhs, rhs, op, tempvar;
  int tmpN = 1;
  int i = 0; 
  if(!in.eof()) in >> token;
  std::vector<String> expr = token.split(' ');
  while(expr[i] != ";"){
    if(!in.eof() && !(isOp(expr[i]))){
      s.push(expr[i]);
    }
    else if(!in.eof()){
	rhs = s.pop();
	lhs = s.pop();
	
	out << "\tLD\t" << lhs << std::endl;

	op = getOp(expr[i]);
	out << op << rhs << std::endl;

	tempvar = "TMP" + intToString(tmpN); ++tmpN;
	s.push(tempvar);

	out << "\tST\t" << tempvar << std::endl;
      } 
    else if(expr[i] == "(" || expr[i] == ")") continue;
    } //end of second while loop
    
    if(expr[i] == ";"){
      tempvar = "TMP" + intToString(tmpN);
      out << "\tST\t" << tempvar << std::endl;
      tmpN = 1;
      out << "-------------------------------------------------------";
    }

    ++i;
}

String getOp(String& op){
       if(op == "+") return "\tAD\t";  
  else if(op == "-")  return "\tSB\t"; 
  else if(op == "*")  return "\tMU\t";
  else if(op == "/")  return "\tDV\t"; 
  else                return "\tUNDEF\t";
}


bool isOp(String& str){
  if((str == "+")||
     (str == "-")||
     (str == "*")||
     (str == "/")) return true;
  
  else return false;
}


String intToString(int x){
  char tmp = '0';
  int i = 0;
  while(i < x) ++tmp; ++i;
  String result(tmp);
  return result;

}
