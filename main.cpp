#include "date.h"
#include "todolist.h"
#include "todo.h"
#include "mtime.h"
#include "menu.h"
#include <string>
#include <stdlib.h>
//TODO: make a cfg file, which (for now)
//only stores the location and name of the inFile

int main() {
    todolist t("./resources/saved_tasks.txt");
    std::string ctor_line = "";
    while(ctor_line != "q") {
        //system("clear");
        menu::printMenuArt();
        t.printTasks();
        std::cout << "give new task by the following format: " << std::endl;
        std::cout << "YYYY.MM.DD;HH:MM;TITLE;DESCRIPTION" << std::endl;
        std::getline(std::cin, ctor_line);
        if(ctor_line != "q")
            t.insert(todo(ctor_line));
    }
    t.tasks_to_file("./resources/saved_tasks.txt");
    return 0;
}
