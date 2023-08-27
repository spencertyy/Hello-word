//
//  main.cpp
//  String Analyzer
//
//  Created by YuYao Tu on 8/25/23.
//

#include <iostream>

bool IsTerminator(char c)
{
    if( c == '.' || c == '?' || c == '!'){
        return true;
    }
    return false;
}

bool IsPunctuation(char c)
{
    if( c == '.' || c == '?' || c == '!' || c == ','){
       return true;
    }
      return false;
}

bool IsVowel(char c)
{
    c = tolower(c);
    if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||  c  == 'y'){
        return true;
    }
    return false;
}
    
bool IsConsonant(char c)
{
    if(  IsTerminator(c) ){
        return false;
    }
    if (IsPunctuation(c) ){
        return false;
    }
    if ( IsVowel(c)){
        return false;
    }
    if ( c == ' '){
        return false;
    }
    else{
        return true;
    }
}
              
int NumWords(std::string s)
{
    int noOfSpaces = 0;
    long leng = s.length();
    for(int i = 0; i< leng ;i++){
        char ch = s[i];
        if(ch ==' '){
            noOfSpaces = noOfSpaces + 1;
        }
    }
    return noOfSpaces+1;
    
}

int NumSentences(std::string s)
{
    int terminatorCounter = 0;
    for(int i = 0; i < s.length(); i++){
        if(IsTerminator(s[i]))
            terminatorCounter++;
            
            
    }
    return terminatorCounter;
}

int NumVowels(std::string s)
{
    int vowels = 0;
    for(int i = 0; i < s.length(); i++){
        if(IsVowel(s[i]))
            vowels++;
    }
    return vowels;
}

int NumConsonants(std::string s)
{
    int consonants = 0;
    for(int i = 0; i < s.length(); i++){
        if(IsConsonant(s[i]))
            consonants++;
    }
    return consonants;
}
double AverageWordLength(std::string s)
{   double length, vowels, consonant, words;
    vowels = NumVowels(s) ;
    consonant = NumConsonants(s);
    words = NumWords(s);
    length = (vowels + consonant )/ words;
    
    return length;
}

double AverageVowelsPerWord(std::string s)
{
    double perword,vowels,words;
    vowels = NumVowels(s) ;
    words = NumWords(s);
    perword = (vowels/ words);
    
    return perword;
    
}

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
