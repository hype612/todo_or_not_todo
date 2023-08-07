#include "date.h"
#include "todolist.h"
#include "todo.h"
#include "mtime.h"
#include <string>

int main() {
    todolist t;
    t.insert(todo("2022.01.01;10:10;take reka to a walk;take her to a walk or else she gets angery"));
    t.insert(todo("2023.10.22;9:30;take out the trash; take it out or else reka will be angery"));
    //todo td("2023.01.01;10:10;take reka to a walk;take her to a walk or else she gets angery");
    //t.insert(td);
    t.printTasks();
    std::cout << t.size() << std::endl;
    return 0;
}
