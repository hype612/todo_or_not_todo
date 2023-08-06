#include "date.h"




//constructors
date::date(int y, int m, int d) {
        if(y < 2023 || m < 1 || m > 12 || d < 1 || d > 31) {
            y = -1; m = -1; d = -1;
            std::cerr << "invalid date" << std::endl; 
            return;
        }

        year = y;
        bool wrong_day_input = false;
        if(d > 31) { wrong_day_input = true; }
        if(month < 8) {
            if((month == 2 && d < 29) ||
               (month % 2 == 1 && d < 32) ||
               (month % 2 == 0 && d < 31)) {
                day = d;      
            }
        }
        else {
            if((month % 2 == 0 && d < 32) || 
               (month % 2 == 1 && d < 31)) {
                day = d;
            }
        }
        if(wrong_day_input) {
            day = -1;
            std::cerr << "invalid date" << std::endl;
        }
        
    }

date::date(const date& rh) {
    year = rh.year;
    month = rh.month;
    day = rh.day;
}

date::date() { year = 0; month = 0; day = -1; }

//getters
int date::getYear() const { return year; }
int date::getMonth() const { return month; }
int date::getDay() const  { return day; }



//setters
bool date::setYear(int y) {
    if(y > 2023) {
        year = y;
        return true;
    }
    return false;
}

bool date::setMonth(int m) {
    if(m > 0 && m < 13) {
        month = m;
        return true;
    }
    return false;
}

bool date::setDay(int d) {
    if(d > 31) { return false; }
    if(month < 8) {
        if((month == 2 && d < 29) ||
           (month % 2 == 1 && d < 32) ||
           (month % 2 == 0 && d < 31)) {
            day = d; 
            return true;     
        }
    }
    else {
        if((month % 2 == 0 && d < 32) || 
           (month % 2 == 1 && d < 31)) {
            day = d;
            return true;
        }
    }
    return false;
}

bool date::setDate(int y, int m, int d) {
    bool y_set = setYear(y);
    bool m_set = setMonth(m);
    bool d_set = setDay(d);

    if(y_set && m_set && d_set) { return true; }
    else { return false; }
}


//overloaded operators
bool date::operator<(const date& right) {
    if(year < right.year && month < right.month && day < right.month) return true;
    else return false;
}


std::ostream& date::operator<< (std::ostream& o_stm){
    o_stm << year << "." << month << "." << day;
    return o_stm;
}
