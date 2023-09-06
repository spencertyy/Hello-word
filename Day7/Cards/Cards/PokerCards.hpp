//
//  PokerCards.hpp
//  Cards
//
//  Created by YuYao Tu on 8/29/23.
//

#ifndef PokerCards_hpp
#define PokerCards_hpp

#include <stdio.h>
#include <string>
#include <vector>


struct Card{
    int rank;
    std::string suit;
};

std::vector<Card> createDeck();
void printDeck(const std::vector<Card>& deck);



#endif /* PokerCards_hpp */






