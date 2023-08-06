#ifndef TODOLIST_H
#define TODOLISTH


#include<iterator>
#include<iostream>
#include<list>
#include "todo.h"


class todolist {
private:
    std::list<todo*> tasks;
public:
    todolist();
    todolist(todo& task);
    
        
    int size() { return tasks.size(); }
    bool insert(todo& task);
    bool pop(const todo& task);
    bool remove(const todo& task);

    void printTasks();
};



#endif
