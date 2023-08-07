#include "todo.h"


todo::todo(std::string i_line)  {
    std::vector<std::string> d_input_arr = splitString(i_line, ';');

    std::vector<std::string> date_arr = splitString(d_input_arr[0], '.');
    date_of_task.setDate(stoi(date_arr[0]), stoi(date_arr[1]), stoi(date_arr[2]));
    std::vector<std::string> time_arr = splitString(d_input_arr[1],':');
    start_time.setTime(stoi(time_arr[0]), stoi(time_arr[1]));
    title = d_input_arr[2];
    if(d_input_arr.size() < 4) {
        comment = "";
    }
    else {
        comment = d_input_arr[3];
    }
}


std::ostream& operator<< (std::ostream& o_stm, const todo& td) {
    o_stm << td.getDate() << " | " << td.getTime() << " | " << td.getTitle() << " | " << td.getComment();
    return o_stm;
}

