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

    shuffle(deck);

    handCards = getHandCards(deck);
    
    while (!isFlush(handCards)) {
        shuffle(deck);
        handCards =getHandCards(deck);
        times+=1;
    };
    
    
    // Group HW: Poker , under make by shane.
    std::cout<<times<<std::endl;
    for(Card card:handCards){
        std::cout<<card.rank<<card.suit<<std::endl;
    };
    times =0;
    while (!isStraight(handCards)) {
        shuffle(deck);
        handCards =getHandCards(deck);
        times+=1;
    };
    std::cout<<times<<std::endl;
    for(Card card:handCards){
        std::cout<<card.rank<<card.suit<<std::endl;
    };
    times =0;
    while (!isStraightFlush(handCards)) {
        shuffle(deck);
        handCards =getHandCards(deck);
        times+=1;
    };
    std::cout<<times<<std::endl;
    for(Card card:handCards){
        std::cout<<card.rank<<card.suit<<std::endl;
    };
    times =0;
    while (!isRoyalFlush(handCards)) {
        shuffle(deck);
        handCards =getHandCards(deck);
        times+=1;
    };
    std::cout<<times<<std::endl;
    for(Card card:handCards){
        std::cout<<card.rank<<card.suit<<std::endl;
    };
    times =0;
    while (!isFullHouse(handCards)) {
        shuffle(deck);
        handCards =getHandCards(deck);
        times+=1;
    };
    std::cout<<times<<std::endl;
    for(Card card:handCards){
        std::cout<<card.rank<<card.suit<<std::endl;
    };
    times =0;
    return 0;
}
