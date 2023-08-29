//
//  main.cpp
//  String Analyzer
//
//  Created by YuYao Tu on 8/25/23.
//

#include <iostream>
#include "LetterHelpers.hpp"
#include "WordsHelpers.hpp"


int main(int argc, const char * argv[]){
    
    int numWords,numSentences,numVowels,numConsonants;
    double averageWordLength,averageVowelsPerWord;
    
    std::string input;
    while (input != "done") {
        std::cout<< "Enter a string (type 'done' to finshed)" <<std::endl;
        std::getline(std::cin,input);
        
        if(input == "done"){
            std::cout << "Goodbye.\n";
            break;
        }
        
        std::cout << "Analysis \n";
        numWords = NumWords (input);
        std::cout <<"Number of words:" << numWords<< "\n";
        numSentences = NumSentences (input);
        std::cout <<"Number of sentences: "<< numSentences << "\n";
        numVowels = NumVowels (input);
        std::cout <<"Number of vowels:"<< numVowels << "\n";
        numConsonants = NumConsonants (input);
        std::cout <<"Number of consonants: "<<numConsonants<<"\n";
        averageWordLength = AverageWordLength (input);
        std::cout <<"Reading level (average word length): "<<averageWordLength<<"\n";
        averageVowelsPerWord = AverageVowelsPerWord(input);
        std::cout <<"Average vowels per word: "<<averageVowelsPerWord<<"\n";
        
    }
    return 0;
}
