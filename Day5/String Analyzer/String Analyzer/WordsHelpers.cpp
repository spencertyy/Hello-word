//
//  WordsHelpers.cpp
//  String Analyzer
//
//  Created by YuYao Tu on 8/28/23.
//

#include "WordsHelpers.hpp"
#include <string>

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
