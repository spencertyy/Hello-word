//
//  main.cpp
//  Palindromes
//
//  Created by YuYao Tu on 8/24/23.
//

#include <iostream>

int main() {

    std::string word ;
    std::cout << "enter a word:\n";
    std::cin >> word ;

    std::string j;
    for(int i = word.length() - 1 ; i >= 0; i-- ){

        j += word[i];
    } if (word == j){
        std:: cout << word << " :IS a palindorme."<< std::endl;
    }else {
        std::cout << word << ":is NOT a palindorme"<< std::endl;
    }
            
    
    
    return 0;
}
