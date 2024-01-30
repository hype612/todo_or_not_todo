#include "todo.h"


todo::todo(const std::string& i_line)  {
    std::vector<std::string> d_input_arr = FileAccess::splitString(i_line, ';');

    std::vector<std::string> date_arr = FileAccess::splitString(d_input_arr[0], '.');
    date_of_task.setDate(stoi(date_arr[0]), stoi(date_arr[1]), stoi(date_arr[2]));
    std::vector<std::string> time_arr = FileAccess::splitString(d_input_arr[1],':');
    start_time.setTime(stoi(time_arr[0]), stoi(time_arr[1]));
    title = d_input_arr[2];
    if(d_input_arr.size() < 4) {
        comment = "";
    }
    else {
        comment = d_input_arr[3];
    }
}


// for output files - currently writes the save file b4 closing app
std::ostream& operator<< (std::fstream& o_stm, const todo& td) {
    o_stm << td.getDate() << ";" << td.getTime() << ";" << td.getTitle() << ";" << td.getComment();
    return o_stm;
}

// for printing on console
std::ostream& operator<< (std::ostream& o_stm, const todo& td) {
    o_stm << td.getDate() << " | " << td.getTime() << " | " << td.getTitle() << " | " << td.getComment();
    return o_stm;
}

