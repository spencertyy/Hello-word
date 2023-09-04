//
//  BookAnalyzer.cpp
//  BookAnalyzer
//
//  Created by YuYao Tu on 9/3/23.
//


#include "Header.h"
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
//std::string myText;
//std::string MyReadFile
std::string shortestWord(std::vector<std::string>words){
    std::string sWord=words[0];
    for(int i=0;i<words.size();i++){
        if(words[i].length()<sWord.length()){
            sWord=words[i];
        }
    } return sWord;
}
std::string longestWord(std::vector<std::string>words){
    std::string lWord=words[0];
    for(int i=0;i<words.size();i++){
        if(words[i].length()>lWord.length()){
            lWord=words[i];
        }
    }return lWord;
}
void appearances (std::vector<std::string>words,std::string keyword,int Numchars){
    
    int pos = 0;
    int keyWordNum = 0;
    std::vector<std::string> occurences;
    std::vector<int> percentages;
    std::string keywords;
    std::cout<<keywords;
    int keywordCount = 0;
    for(int i=0;i<words.size();i++){
        if(words[i]== keyword){
            keywordCount++;
        }
        pos += words[i].size();
        if(words[i] == keyword){
            double Percentage = (static_cast<double>(pos) / Numchars) * 100;
            percentages.push_back(Percentage);
            std::string surroundStr = words[i-1]+
            " "+words[i]+" "+words[i+1];
            occurences.push_back(surroundStr);
        }
    
    }
    
    std::cout<< "The word "<< keyword <<" appears "<<keywordCount<<" times: "<<std::endl;
    for(int i = 0; i<percentages.size(); i++){
        std::cout<<"at "<<percentages[i]<<"%: "<<occurences[i]<<std::endl;
    }
  
}

