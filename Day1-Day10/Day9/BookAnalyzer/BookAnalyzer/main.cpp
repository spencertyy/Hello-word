//
//  main.cpp
//  BookAnalyzer
//
//  Created by YuYao Tu on 9/3/23.
//


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Header.h"

int main(int argc, const char * argv[]) {
    
    // TODO: ask user to enter the path of the file
    std::string path = argv[1];
    std::string keyword = argv[2];
//    std::cout<<keyword;
    //    std::cout<<" enter the path of the file."<<std::endl;
    //    std::cin >> path;
    std::ifstream MyReadFile(path);
//    Key keyValue;
    
    if(MyReadFile.fail()){
        std::cout << " Failed to open file,\n";
        exit(1);
    }
    
    //    std::string word;
    //    std::vector<std::string> words= {} ;
    //    while (MyReadFile>>word) {
    //        words.push_back(word);
    //        std::cout << "Read in :" << word << "\n";
    //    }
    
    
    std::string title = "unknown";
    std::string word;
    std::string anthor= "unknown";
    std::string date;
    int numC = 0;
    std::string sWord;
    std::string lWord;
    std::vector<std::string> words;
    std::string keywords;
//    int keywordCount = 0;
    //    std::vector<std::string> anthor= {};
    int num =0 ;
    while (MyReadFile >> word) {
        words.push_back(word);
        numC+=word.length();
        
        if(word == "Title:"){
            std::getline(MyReadFile,title);
        }
        if(word == "Author:"){
            std::getline(MyReadFile,anthor);
        }
        if(word == "Date:"){
            std::getline(MyReadFile,date);
        }
        if(word == keyword){
            std::getline(MyReadFile,keywords);
        }
        num++;
    }
    sWord = shortestWord(words);
    lWord = longestWord(words);
//    keyValue = appearances(words, keyword, 2);
    std::cout<< "Title: " <<title <<"\n";
    std::cout<< "Author:" <<anthor<<"\n";
    std::cout<< "Release date:" <<date<<"\n";
    std::cout<< "Number of words:" <<num<<"\n";
    std::cout<< "Number of characters:" <<numC<<"\n";
    std::cout<< "The shortest word is: " << sWord <<" and the longest word is: "<<lWord<<"\n";
    appearances(words, keyword, numC);

    

return 0;

        }
       
       



