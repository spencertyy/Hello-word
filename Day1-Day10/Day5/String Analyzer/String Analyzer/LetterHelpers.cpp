//
//  LetterHelpers.cpp
//  String Analyzer
//
//  Created by YuYao Tu on 8/28/23.
//

#include "LetterHelpers.hpp"
#include <string>
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
