#ifndef TODO_H
#define TODO_H

#include <string>
#include "date.h"
#include "mtime.h"
#include "readFile.h"


class todo {
private:
    date date_of_task;
    mtime start_time;
    //todo: mtime end_time;
    std::string title;
    std::string comment;
public:
    todo(std::string i_line); //wont work this way, bcs of comment section 
    //getters
    const date& getDate() { return date_of_task; }
    const mtime& getTime() { return start_time; }
    std::string& getTitle() { return title; }
    std::string& getComment() { return comment; } 
    


    //overloaded operators
    std::ostream& operator<< (std::ostream& o_stm);
};



#endif
