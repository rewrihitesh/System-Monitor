#include <string>
#include <iomanip>
#include <sstream>
#include "../include/format.h"

using std::string;
using std::to_string;
using std::setw;
using std::setfill;


// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
    // DONE: Converted the Long seconds to given format; 
    // string res="";
    std::ostringstream res;
    long hrs=seconds/3600;
    seconds%=3600;
    long minutes=seconds/60;
    seconds%=60;
    res<<setfill('0')<<setw(2)<<std::to_string(hrs)<<":"<<
    setfill('0')<<setw(2)<<std::to_string(minutes)<<":"<<
    setfill('0')<<setw(2)<<std::to_string(seconds);
     return res.str();
 }