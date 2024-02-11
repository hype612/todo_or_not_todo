#include "date.h"
#include "todolist.h"
#include "todo.h"
#include "mtime.h"
#include "menu.h"
#include <string>
#include <stdlib.h>
#include <ncurses.h>
//TODO: make a cfg file, which (for now)
//only stores the location and name of the inFile

int main() { 
    // og while implementation of menu
    // replacing it with curses
    /*while(ctor_line != "q") {
        system("clear");
        menu::printMenuArt();
        t.printTasks();
        std::cout << "give new task by the following format: " << std::endl;
        std::cout << "YYYY.MM.DD;HH:MM;TITLE;DESCRIPTION" << std::endl;
        std::getline(std::cin, ctor_line);
        if(ctor_line != "q")
            t.insert(todo(ctor_line));
    }*/
    todolist t("./resources/saved_tasks.txt");
    std::string ctor_line = "";
    initscr(); // start curses
    raw(); // disables line-buffering 
    noecho(); // does not bypass characters inputted  to the terminal. 
    keypad(stdscr, TRUE); // enables reading of e.g. arrow keys
     
    endwin(); // finish ncurses
    t.tasks_to_file("./resources/saved_tasks.txt");
    return 0;
}
