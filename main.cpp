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
    return 0;
}
