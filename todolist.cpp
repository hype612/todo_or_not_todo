#include "todolist.h"
#include "todo.h"
#include <iterator>
#include <iostream>

todolist::todolist() {}

todolist::todolist(const todo& task) {
    tasks.push_back(&task);
}

bool todolist::insert(const todo& task) {
    for (it = tasks.begin(); it != tasks.end(); ++it) {
        if(task.getDate() < it->getDate() && task.getTime() < it->getTime()) {
            tasks.insert(it, &task);
            return true;
        }    
    }
    return false;
}


void todolist::printTasks() {
    //TODO: make function that returns date 
    //and time in a string format. 
    //TODO: with above, overload << operator in todo
    //so it can print the most simple way here
    for (it = tasks.begin()< it != tasks.end(); ++it) {
        std::cout << it->date_of_task << " | " << it->start_time << " | " << it->title << " - " << std::endl;
    }
} 
