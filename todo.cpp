#include "todo.h"


todo::todo(std::string i_line)  {
    std::vector<std::string> d_input_arr = splitString(i_line, ';');

    std::vector<std::string> date_arr = splitString(d_input_arr[0], ".");
    //date_of_task = date(stoi(date_arr[0]), stoi(date_arr[1]), stoi(date_arr[2]));
    date_of_task.setDate(stoi(date_arr[0]), stoi(date_arr[1]), stoi(date_arr[2]));

    std::vector<std::string> time_arr = splitString(d_input_arr[1]);
    start_time.setTime(stoi(time_arr[0]), stoi(time_arr[1]));
    title = d_input_arr[2]
    if(d_input_arr.size() < 4) {
        comment = "";
    }
    else {
        comment = d_input_arr[3];
    }
}


std::ostream& todo::operator<< (std::ostream& o_stm) {
    o_stm << date_of_task << start_time << title << comment;
    return o_stm;
} 
