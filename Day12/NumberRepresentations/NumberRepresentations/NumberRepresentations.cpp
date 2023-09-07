//
//  NumberRepresentations.cpp
//  NumberRepresentations
//
//  Created by YuYao Tu on 9/6/23.
//

#include "NumberRepresentations.hpp"
#include <cmath>

// comparing your value with its tolerance with the value its supposed to be i.e., 0.1 + 0.2 value and 0.3 utilizing the tolerance
bool approxEquals( double a, double b, double tolerance ){
    return std::abs(a - b) <= tolerance;
}

 std :: vector <int> countASCIOUTofFile(){
  using namespace std;
   vector<int>numberOfBoth;
  char charOfbook;
  ifstream book;
  int countASCIvalues = 0;
  int decimalNumber = 0;
  string asciOrUt;
  int countUniCodeChars = 0;
  book.open("Unicode.txt");
  // stream the book data into characters -> charOfBook
  while( book >> charOfbook ){
    // print character from book
    cout << charOfbook;
    // make the char into int with + and convert it to a string (base 10)
    asciOrUt = to_string(+charOfbook);
    // print string value from the integer from the character
    cout<< ' ' << asciOrUt << "\n";
    //conver the string to an integer
    decimalNumber = stoi(asciOrUt);
    if(decimalNumber >= 0 and decimalNumber < 128){
      countASCIvalues += 1;
    }
    countUniCodeChars += 1;
  }
   numberOfBoth.push_back(countASCIvalues);
   numberOfBoth.push_back(countUniCodeChars);
  return numberOfBoth;
}

