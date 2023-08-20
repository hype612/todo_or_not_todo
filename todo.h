#ifndef TODO_H
#define TODO_H

#include <string>
#include "date.h"
#include "mtime.h"
#include "fileAccess.h"


class todo {
private:
    date date_of_task;
    mtime start_time;
    std::string title;
    std::string comment;
public:
    todo(const std::string& i_line);
    //getters
    const date& getDate() const { return date_of_task; }
    const mtime& getTime() const  { return start_time; }
    const std::string& getTitle() const { return title; }
    const std::string& getComment() const { return comment; } 


};


std::ostream& operator<< (std::ostream& o_stm, const todo& td);

#endif
