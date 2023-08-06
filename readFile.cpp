#include "readFile.h"


std::vector<std::string> FileToStringVector(const std::string filepath)
{
    std::vector<std::string> oVector;
    std::string line;
    std::ifstream inFile(filepath);
    while (std::getline(inFile, line))
    {
        oVector.push_back(line);
    }
    return oVector;
}

std::vector<std::string> splitString(const std::string& splitted,
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
