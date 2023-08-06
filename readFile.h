#ifndef READFILE_H
#define READFILE_H

#include <fstream>
#include <sstream>
#include <vector>


std::vector<std::string> FileToStringVector(std::string filepath);
std::vector<std::string> splitString(const std::string& splitted, char delimeter);

#endif