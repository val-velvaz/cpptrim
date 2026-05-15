#ifndef CPPTRIM
#define CPPTRIM
#pragma once
#include <string>
#include <cctype>

//Removes all trailing and ending whitespace from a string
void trim(std::string & line){
    //If the std::string is empty
    if(line.size() == 0) return "";
    
    
    //Left trim
    size_t first = 0;

    // find first non-whitespace character
    while (first < line.size() && std::isspace(static_cast<unsigned char>
        (line[first]))) {
        ++first;
    }
    
    //Right trim
    size_t last = line.size();

    // find last non-whitespace character
    while (last > line.size() && std::isspace(static_cast<unsigned char>
        (line[last - 1]))) {
        --last;
    }
    
    //Trim the std::string
    line = line.substr(first, last - first);
} 
#endif
