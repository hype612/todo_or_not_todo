#ifndef TODOLIST_H
#define TODOLISTH

#include<list>
#include "todo.h"


class todolist {
private:
    std::list<todo*> tasks;
public:
    todolist();
    todolist(const todo& task);
    
        
    int size() { return tasks.size(); }
    bool insert(const todo& task);
    bool pop(const todo& task);
    bool remove(const todo& task);

    void printTasks();
};



#endif
