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
        }//use for loop get the shortest word,if the i length smaller then the word then = to the smaller
    } return sWord;
}
std::string longestWord(std::vector<std::string>words){
    std::string lWord=words[0];
    for(int i=0;i<words.size();i++){
        if(words[i].length()>lWord.length()){
            lWord=words[i];
        } //use for loop get the shortest word,if the i length biger then the word  then = to the biger
    }return lWord;
}
void appearances (std::vector<std::string>words,std::string keyword,int Numchars){ //算出现了几次，记录出现的位置（百分比）和前后文

    int pos = 0;
    int keyWordNum = 0;
    std::vector<std::string> occurences;
    std::vector<int> percentages;
    std::string keywords;
    std::cout<<keywords;
    int keywordCount = 0;
    for(int i=0;i<words.size();i++){ //用forloop把字都滚了一遍
        pos += words[i].size(); //记录数到keyword
        if(words[i] == keyword){
            keywordCount++;//如果找到这个words，keywordcount记录出现了几次
            double Percentage = (static_cast<double>(pos) / Numchars) * 100;
            //Percentage=keyword出现时的字符除以总字符数
percentages.push_back(Percentage);//Percentage result pushback to percentages
            std::string surroundStr = words[i-1]+
            " "+words[i]+" "+words[i+1];//三个单词加上两个空格得到大的string
            occurences.push_back(surroundStr);//大的string pushback到occurences的vector
            
        }
    
    }
    
    std::cout<< "The word "<< keyword <<" appears "<<keywordCount<<" times: "<<std::endl;
    for(int i = 0; i<percentages.size(); i++){
        std::cout<<"at "<<percentages[i]<<"%: "<<occurences[i]<<std::endl;
    }//用for loop cout一个percentages（百分比）和occurences（前后文）
  
}

