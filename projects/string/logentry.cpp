//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    std::vector<String> vec = s.split(' ');
    if(vec.size() == 10){
      host = vec[0];

      //the time and date are stored in vec[3], split on ':'
      std::vector<String> date_time = vec[3].split(':');
      /*
      now date_time stores the date and time as follows:
      date_time[0] = date (day/month/year)
      date_time[1] = hour
      date_time[2] = minute
      date_time[3] = second
      */
      
      //stores the time values into the time class
      time.sethour    (date_time[1].to_int());
      time.setminute  (date_time[2].to_int());
      time.setsecond  (date_time[3].to_int());

  
      //date needs to be split into days, months, and years
      std::vector<String> date_full = date_time[0].split('/');
      /*
      now date_full stores the day/month/year as follows:
      date_full[0] = day
      date_full[1] = month
      date_full[2] = year
      */
      

      //storing the date values into the Date class
      String stringDay = date_full[0].substr(1, date_full[0].length());
      date.setday(stringDay);
      //the private variable day is no equal to day
      //in logentry_1_small.txt day would be "18"

      String stringMonth = date_full[1];
      date.setmonth(stringMonth);

      int intYear = date_full[2].to_int();
      date.setyear(intYear);

      //concatinate the request Strings
      request = vec[5] + vec[6] + vec[7];

      status = vec[8];

      number_of_bytes = vec[9].to_int();


    }
    //if the log entry does not have 10 elements
    //then create an empty vector
    else{
      //Date
      date.setday("");
      date.setmonth("");
      date.setyear(0);
      //Time
      time.sethour(0);
      time.setminute(0);
      time.setsecond(0);
      //Logentry
      host = "";
      request = "";
      status = "";
      number_of_bytes = 0;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  if in is a file istream, then it is connect to a file
// ENSURES: vector<Logentry> result is filled with logentrys
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
        char ch;
    while(!in.eof()) {
      String a;
      in.get(ch);
      while( ( ch != '\n' ) && ( !in.eof() ) ) {
    	    a += ch;
    	    in.get(ch);
    	    if(ch == '\n') break;
      }
      if(in.eof()) break;
      result.push_back(a);
    }
    return result;
}

////////////////////////////////////////////////////////////
// REQUIRES: If out is a file output stream, then out has already been connected to a file.
// ENSURES: outputs a LogEntry object to the screen
//
std::ostream& operator<<(std::ostream& out, const LogEntry& log){

   out << "Host: "    << log.host              << std::endl;
  
   out << "Day: "     << log.date.getday()     << std::endl;
   out << "Month: "   << log.date.getmonth()   << std::endl;
   out << "Year: "    << log.date.getyear()    << std::endl;
  
   out << "Hour: "    << log.time.gethour()   << std::endl;
   out << "Minute: "  << log.time.getminute() << std::endl;
   out << "Second: "  << log.time.getsecond() << std::endl;
  
   out << "Request: " << log.request          << std::endl;
   out << "Status: "  << log.status           << std::endl;
   out << "Bytes: "   << log.number_of_bytes  << std::endl;

   return out;
}

////////////////////////////////////////////////////////// 
// REQUIRES: If out is a file output stream, then out has already been connected to a file. 
// ENSURES: outputs each logentry to the output stream specified
//
void output_all(std::ostream& out, const std::vector<LogEntry> &logs ) {
  for(unsigned int i = 0; i < logs.size(); ++i)
      out << logs[i];
}

////////////////////////////////////////////////////////// 
// REQUIRES:  If out is a file output stream, then out has already been connected to a file 
// ENSURES: outputs the host of each log Entry
//
void by_host(std::ostream& out, const std::vector<LogEntry> &logs) {
  for(unsigned int i = 0; i < logs.size(); ++i)
    out << logs[i].getHost() << std::endl;
}

////////////////////////////////////////////////////////// 
// REQUIRES: logs has been given values 
// ENSURES:  returns the sum of number_of_bytes
//
int byte_count(const std::vector<LogEntry> &logs) {
  int sum = 0;

  for(unsigned int i = 0; i < logs.size(); ++i){
    sum += logs[i].getBytes();
  }

  return sum;
}

