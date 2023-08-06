#ifndef MTIME_H
#define MTIME_H

#include <iostream>

class mtime {
private:
    int hour;
    int minute;
public:
    //constructors
    mtime(int h, int m);
    mtime();

    //getters
    int getHour() const;
    int getMinute() const;

    //setters
    bool setHour(int h);
    bool setMinute(int m);
    bool setTime(int h, int m);
    

    //overloaded operators
    bool operator<(const mtime& right);
    std::ostream& operator<< (std::ostream& o_stm);
};


#endif
