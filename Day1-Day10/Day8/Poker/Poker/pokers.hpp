//
//  pokers.hpp
//  Poker
//
//  Created by YuYao Tu on 8/30/23.
//

#ifndef pokers_hpp
#define pokers_hpp

#include <stdio.h>
#include <string>
#include <vector>


struct Card{//card是一个文件夹包含rank和suit
    int rank;
    std::string suit;
};

std::vector<Card> creatDeck();
void print(std::vector<Card> deck);
void shuffle(std::vector<Card>&deck);
void swap(Card & x , Card & y);
std::vector<Card> getHandCards(std::vector<Card>& cards);
bool isFlush(const std::vector<Card>hands);
// Group HW: Poker , under make by shane.
bool isStraight(const std::vector<Card>& handCard);//传bool的type到isstraight，（传vector里面的card的箱子
bool isStraightFlush(const std::vector<Card>& handCard);
bool isRoyalFlush(const std::vector<Card>& handCard);
bool isFullHouse(const std::vector<Card>& handCard);

#endif /* pokers_hpp */
