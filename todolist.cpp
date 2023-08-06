#include "todolist.h"

todolist::todolist() {}

todolist::todolist(todo& task) {
    tasks.push_back(&task);
}

bool todolist::insert(todo& task) {
    std::list<todo*>::iterator it;
    for (it = tasks.begin(); it != tasks.end(); ++it) {
        if((task.getDate() < (*it)->getDate()) && (task.getTime() < (*it)->getTime())) { 
            tasks.insert(it, &task);
            return true;
        }    
    }
    return false;
}


void todolist::printTasks() {
    std::list<todo*>::iterator it;
    for (it = tasks.begin(); it != tasks.end(); ++it) {
        std::cout << *it << std::endl;
    }
}


