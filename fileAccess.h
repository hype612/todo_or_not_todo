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

class FileAccess {
public:
    FileAccess(const std::string& filepath, std::ios_base::openmode openmode = std::ios_base::in);
    ~FileAccess();

    // was templated 
    // changed to date only
    template<class T>
    void file_wrLine(const T& toPrint) {
        t_file << toPrint << "\n";    
    }
    std::vector<std::string> FileToStringVector();
    static std::vector<std::string> splitString(const std::string& splitted, char delimeter);

private:
    //no point in calling def ctor
    FileAccess();
    //prohibited copying since it would not make sense anyway
    FileAccess(const FileAccess&);
    FileAccess& operator=(const FileAccess& rhs);
    
    std::fstream t_file;
    std::ios_base::openmode op_mode; 
};



#endif
