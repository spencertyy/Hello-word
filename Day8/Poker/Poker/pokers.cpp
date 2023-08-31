//
//  pokers.cpp
//  Poker
//
//  Created by YuYao Tu on 8/30/23.
//

#include "pokers.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::vector<Card> creatDeck(){
   std::vector<std::string> Cardstype = {"Spade", "Heart", "Diamond", "Club"};
    
    std::vector<Card> deck;
 
    for(std::string i : Cardstype){
        for(int num = 1; num<=13 ; num++){
            Card card;
            card.rank = num;
            card.suit = i;
            deck.push_back(card);
        }
    }
    
    return deck;
}


void print(std::vector<Card> deck){
    
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
void swap(Card & x , Card & y){
    
    Card temp = x;
    x = y;
    y = temp;
}

void shuffle(std::vector<Card>& deck){
 for ( int i = 51;i>0;i--){
       int j = rand() % (i+1);
     swap(deck[j] ,deck[i]);
        }
}

std::vector<Card> getHandCards(std::vector<Card>& cards){
    std::vector<Card> handCards;
    int i=5;
    while (i>0) {
        handCards.push_back(cards[i]);
        i--;
    }
    return handCards;
}


bool isFlush(const std::vector<Card>deck){
    for ( int i = 0; i<4 ; i++){
        if (deck[i].suit != deck[i+1].suit ){
            return false;
        }
        }
        return true;
    }


// Group HW: Poker , under make by shane.
bool isStraight(const std::vector<Card>& handCard){
    int pre,cur;
    std::vector<int> rankInHandCrad;
    for(Card card:handCard){
        rankInHandCrad.push_back(card.rank);
    }
    sort(rankInHandCrad.begin(), rankInHandCrad.end());
    for(int i =1; i<rankInHandCrad.size();i++){
        cur = rankInHandCrad[i];
        if (rankInHandCrad[i-1]==1 and rankInHandCrad[rankInHandCrad.size()-1]==13) {
            pre =10;
        }else{
            pre =rankInHandCrad[i-1]+1;
        }
        if (cur!=pre) {
            return false;
        }
    }
    return true;
}
bool isStraightFlush(const std::vector<Card>& handCard){
    if (!isFlush(handCard)) {
        return false;
    }
    if (!isStraight(handCard)) {
        return false;
    }
    return true;
}
bool isRoyalFlush(const std:: vector<Card>& handCard){
    if (!isFlush(handCard)) {
        return false;
    }
    if (!isStraight(handCard)) {
        return false;
    }
    std::vector<int> rankInHandCrad;
    for(Card card:handCard){
        rankInHandCrad.push_back(card.rank);
    }
    sort(rankInHandCrad.begin(), rankInHandCrad.end());
    if (rankInHandCrad[1]<10) {
        return false;
    }
    return true;
}
bool isFullHouse(const std::vector<Card>& handCard){
    std::vector<int> rankInHandCrad;
    for(Card card:handCard){
        rankInHandCrad.push_back(card.rank);
    }
    sort(rankInHandCrad.begin(), rankInHandCrad.end());
    if (rankInHandCrad[0]!=rankInHandCrad[1]) {
        return false;
    }else if (rankInHandCrad[rankInHandCrad.size()-1]!=rankInHandCrad[rankInHandCrad.size()-2]){
        return false;
    }
    if (rankInHandCrad[2]!=rankInHandCrad[1] and rankInHandCrad[2]!=rankInHandCrad[3] ) {
        return false;
    }
    return true;
}



