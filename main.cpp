#include "date.h"
#include "todolist.h"
#include "todo.h"
#include "mtime.h"
#include "menu.h"
#include <string>

//TODO: make a cfg file, which (for now)
//only stores the location and name of the inFile

int main() {
    todolist t("./resources/saved_tasks.txt");
    menu::printMenuArt();
    t.printTasks();
    std::cout << "give new task by the following format: " << std::endl;
    std::cout << "YYYY.MM.DD;HH:MM;TITLE;DESCRIPTION" << std::endl;
    std::string ctor_line;
    //std::cin.get() >> ctor_line;
    t.insert(todo(ctor_line));
    std::cout << "here are the new list of tasks: \n \n \n";
    t.printTasks();
    t.tasks_to_file("./resources/saved_tasks");
    return 0;
}
