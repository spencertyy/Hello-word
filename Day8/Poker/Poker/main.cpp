//
//  main.cpp
//  Poker
//
//  Created by YuYao Tu on 8/30/23.
//
#include <iostream>
#include "pokers.hpp"
int main(int argc, const char * argv[]) {
 
    std::vector<Card> deck,handCards;
    deck = creatDeck();
    int times=0;

    
    
    int Straight = 0;
    int flush = 0;
    int fullhouse = 0;
    int straightFlush = 0;
    int royalFlush = 0;
    
    
    for(int i = 0; i < 1000000; i++){
        //shuffle cards
        shuffle(deck);
        // get 5 cards
        handCards = getHandCards(deck);
        
        if(isStraight(handCards)){
            Straight+=1;
        }
        if(isFlush(handCards)){
            flush+=1;
        }
        if (isFullHouse(handCards)){
            fullhouse+=1;
        }
        if (isStraightFlush(handCards)){
            straightFlush+=1;
        }
        if(isRoyalFlush(handCards)){
            royalFlush+=1;
        }
    }
        
        std::cout<<"isFlush: "<<flush<<std::endl;
        std::cout<<"isStraight: "<<Straight<<std::endl;
        std::cout<<"isStraightFlush: "<<straightFlush<<std::endl;
        std::cout<<"isRoyalFlush: "<<royalFlush<<std::endl;
        std::cout<<"isFullHouse: "<<fullhouse<<std::endl;
        
    
    return 0;
}
