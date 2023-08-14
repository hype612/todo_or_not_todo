#ifndef READFILE_H
#define READFILE_H

#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>

//RAII class, so the stream closes automatically at end of usage
//at the moment, it is only possible to read from a file
//TODO: make FileReader a general class, that can both open files for wrting and reading

class FileReader {
public:
    FileReader(const std::string& filepath);
    ~FileReader();

    std::vector<std::string> FileToStringVector();
    static std::vector<std::string> splitString(const std::string& splitted, char delimeter);

private:
    FileReader();
    FileReader(const FileReader&);
    FileReader& operator=(const FileReader& rhs);
    std::ifstream i_file; 

};



#endif
