#ifndef DATE_H
#define DATE_H

#include <iostream>


class date {
private:
    int year;
    int month;
    int day;
public:
    //constructors
    date(int y, int m, int d);
    date(const date& rh);
    date();

    //getters
    int getYear() const;
    int getMonth() const;
    int getDay() const;

    //setters
    bool setYear(int y);
    bool setMonth(int m);
    bool setDay(int d);
    bool setDate(int y, int m, int d);

    //overloaded operators
    bool operator<(const date& right);
    std::ostream& operator<< (std::ostream& o_stm);
};


#endif
