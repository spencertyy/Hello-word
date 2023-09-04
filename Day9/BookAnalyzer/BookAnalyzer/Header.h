//
//  Header.h
//  BookAnalyzer
//
//  Created by YuYao Tu on 9/3/23.
//

#ifndef BookAnalyzer_hpp
#define BookAnalyzer_hpp

#include <stdio.h>
#include <fstream>
#include <vector>
struct Key{
    std::string keyword;
    int wordNum;
    
};

std::string shortestWord(std::vector<std::string>words);
std::string longestWord(std::vector<std::string>words);
void appearances (std::vector<std::string>words,std::string keyword,int Numchars);



#endif /* Book_Analyzer_hpp */
