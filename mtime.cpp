#include "mtime.h"

#include <iostream>

mtime::mtime(int h, int m) {
    if(h < 0 || h > 23 || m < 0 || m > 59) {
        std::cerr << "invalid time format" << std::endl;
        return;
    }

    else {
        hour = h;
        minute = m;
    }
}

mtime::mtime() { hour = 0; minute = -1; }

int mtime::getHour() const { return hour; }
int mtime::getMinute() const { return minute; }

bool mtime::setHour(int h) { 
    if(h < 0 || h > 23) {
        std::cerr << "invalid hour data" << std::endl;
        return false;
    }
    
    else {
        hour = h;
        return true;
    }
}

bool mtime::setMinute(int m) { 
    if(m < 0 || m > 59) {
        std::cerr << "invalid minute data" << std::endl;
        return false;
    }
    
    else {
        minute = m;
        return true;
    }
}

bool mtime::setTime(int h, int m) {
    bool h_set = setHour(h);
    bool m_set = setMinute(m);
    
    if(h_set && m_set) { return true; }
    else { return false; }
    
}



bool mtime::operator<(const mtime& right) const {
    if(hour < right.hour && minute < right.minute) { 
        return true;
    }
    return false;
}


std::ostream& operator<< (std::ostream& o_stm, const mtime& t) {
    o_stm << t.getHour()  << ":" << t.getMinute();
    return o_stm;
}

