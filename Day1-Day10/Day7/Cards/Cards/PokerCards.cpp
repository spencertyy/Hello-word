//
//  PokerCards.cpp
//  Cards
//
//  Created by YuYao Tu on 8/29/23.
//

#include "PokerCards.hpp"
#include <iostream>
#include <string>

std::vector<Card> createDeck(){
   std::vector<std::string> Cardstype = {"Spade", "Heart", "Diamond", "Club"};
    
    
    std::vector<Card> deck;
 
    // Build the deck by looping over all suits
    // and getting all 13 ranks for each suit
    for(const std::string& i : Cardstype){
        for(int num = 1; num<=13 ; num++){
            Card card;
            card.rank = num;    //num是多少张牌.
            card.suit = i;      //i是卡的花色.
            deck.push_back(card);
        }
    }
    
    return deck;
}



void printDeck(const std::vector<Card>& deck){
    
    for( int i = 0; i<deck.size();i++){
        
        std::cout<<" " << deck[i].suit << " ";
        if ( deck[i].rank == 13){
            std::cout<< "K"<<std::endl;
        }
        else if ( deck[i].rank == 12){
            std::cout<< "Q"<<std::endl;
        }
        else if ( deck[i].rank == 11){
            std::cout<< "J"<<std::endl;
        }else if (deck[i].rank == 1){
            std::cout<< "A"<<std::endl;
        }
        else{
           std::cout<<deck[i].rank<<std::endl;
        }
    }
    
}

