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
    FileReader(const std::string& filepath, std::ios_base::openmode openmode = std::ios_base::in);
    ~FileReader();

    template<typename T>
    void file_wrLine(const T& toPrint) {
        t_file << toPrint;    
    }
    std::vector<std::string> FileToStringVector();
    static std::vector<std::string> splitString(const std::string& splitted, char delimeter);

private:
    //no point in calling def ctor
    FileReader();
    //prohibited copying since it would not make sense anyway
    FileReader(const FileReader&);
    FileReader& operator=(const FileReader& rhs);
    
    std::fstream t_file;
    std::ios_base::openmode op_mode; 
};



#endif
