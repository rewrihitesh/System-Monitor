#include <string>

#include "../include/format.h"

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
    // DONE: Converted the Long seconds to given format; 
    string res="";
    long hrs=seconds/3600;
    seconds%=3600;
    long minutes=seconds/60;
    seconds%=60;
    res+=std::to_string(hrs)+":"+std::to_string(minutes)+":"+std::to_string(seconds);
     return res;
 }