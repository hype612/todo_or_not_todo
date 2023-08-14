#include "todolist.h"

todolist::todolist() {}

todolist::todolist(const std::string& filepath) {
    FileReader f(filepath);
    std::vector<std::string> i_vector = f.FileToStringVector();
    for(int i = 0; i < i_vector.size(); ++i) {
        this->insert(todo(i_vector[i]));
    } 


}

bool todolist::insert(const todo& task) {
    std::list<todo>::iterator it;
    if(tasks.begin() == tasks.end()) {
        tasks.push_back(task);
        return true;
    }
    for (it = tasks.begin(); it != tasks.end(); ++it) {
        if((task.getDate() < it->getDate()) && (task.getTime() < it->getTime())) { 
            tasks.insert(it, task);
            return true;
        }   
    }

    if(it == tasks.end()) {
        tasks.insert(it, task);
        return true; 
    }
    return false; //when should insertions fail???
}


void todolist::printTasks() {
    std::list<todo>::iterator it;
    for (it = tasks.begin(); it != tasks.end(); ++it) {
        std::cout << *it << std::endl;
    }
}


