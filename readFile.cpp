#include "readFile.h"

FileReader::FileReader(const std::string& filepath)
    : i_file(filepath)
    {
        if(i_file.is_open()) { return; }
        else {
            std::cerr << "could not open file: " << filepath << std::endl;
           return; 
        }
    }

FileReader::~FileReader() {
    try { i_file.close(); }
    catch(const std::exception& ex) {
        std::cerr << "could not close file correctly" << std::endl;
        return;
    }
}


std::vector<std::string> FileReader::FileToStringVector() {
    std::vector<std::string> oVector;
    std::string line;
    while (std::getline(i_file, line))
    {
        oVector.push_back(line);
    }
    return oVector;
}

std::vector<std::string> FileReader::splitString(const std::string& splitted,
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
