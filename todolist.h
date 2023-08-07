#ifndef TODOLIST_H
#define TODOLISTH


#include<iterator>
#include<iostream>
#include<list>
#include <vector>
#include "todo.h"
#include "readFile.h"

class todolist {
private:
    std::list<todo> tasks;
public:
    todolist();
    todolist(const std::string& filepath);
        
    int size() const { return tasks.size(); }
    bool insert(const todo& task);
    bool pop(const todo& task);
    bool remove(const todo& task);

    void printTasks();
};



#endif
