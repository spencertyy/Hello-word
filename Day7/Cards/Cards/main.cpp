//
//  main.cpp
//  Cards
//
//  Created by YuYao Tu on 8/29/23.
//

#include <iostream>
#include "PokerCards.hpp"
int main(int argc, const char * argv[]) {
 
    std::vector<Card> deck = createDeck();
    printDeck(deck);


   
    
    return 0;
}
