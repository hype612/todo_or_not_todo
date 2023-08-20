#include "fileAccess.h"

FileAccess::FileAccess(const std::string& filepath, std::ios_base::openmode openmode)
    : t_file(filepath, openmode),
      op_mode(openmode)
    {
        if(t_file.is_open()) { return; }
        else {
            std::cerr << "could not open file: " << filepath << std::endl;
           return; 
        }
    }

FileAccess::~FileAccess() {
    try { t_file.close(); }
    catch(const std::exception& ex) {
        std::cerr << "could not close file correctly" << std::endl;
        return;
    }
}


std::vector<std::string> FileAccess::FileToStringVector() {
    //check later if it makes senes
    if(op_mode != std::ios_base::in) {
        std::cerr << "file was not opened for reading" << std::endl;
        std::vector<std::string> ret(1, "");
        return ret; //construct an empty vector to return
    }
    std::vector<std::string> oVector;
    std::string line;
    while (std::getline(t_file, line))
    {
        oVector.push_back(line);
    }
    return oVector;
}

std::vector<std::string> FileAccess::splitString(const std::string& splitted,
    char delimeter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(splitted);
    while (std::getline(tokenStream, token, delimeter))
    {
        tokens.push_back(token);
    }
    return tokens;
}
