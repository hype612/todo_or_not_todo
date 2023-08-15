#ifndef TODOLIST_H
#define TODOLIST_H


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
    void tasks_to_file(const std::string& filepath);
};



#endif
