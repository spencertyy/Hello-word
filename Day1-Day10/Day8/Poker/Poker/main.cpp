//
//  main.cpp
//  Poker
//
//  Created by YuYao Tu on 8/30/23.
//
#include <iostream>
#include "pokers.hpp"
int main(int argc, const char * argv[]) {
 //宣告：我告诉电脑我现在要用什么东西，
    std::vector<Card> deck,handCards;
    deck = creatDeck();
//    int times=0;

    
    //flush是变数，形态是int，0是value。
    int Straight = 0;
    int flush = 0;
    int fullhouse = 0;
    int straightFlush = 0;
    int royalFlush = 0;
    //创建了一个royalflush的变数只能用int的type来代表他的值是0，
    double howManyTime;
    //创建一个howmanytime的变数只能用int的type来代表但是没有创建值。
    std::cout<< "How many time you want to play:"<< std::endl;
    std::cin >> howManyTime;
    
    for(int i = 0; i < howManyTime; i++){
        //shuffle cards
        shuffle(deck);
        // get 5 cards
        handCards = getHandCards(deck);
        //deck里面一叠牌给gethandcards里面在哪五张牌给handcards
        if(isStraight(handCards)){//
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
    
   
    double aflush,aStraight,astraightFlush,aroyalFlush,afullhouse;
    aflush=(flush*100)/howManyTime;
    aStraight=(Straight*100)/howManyTime;
    astraightFlush=(straightFlush*100)/howManyTime;
    aroyalFlush=(royalFlush*100)/howManyTime;
    afullhouse=(fullhouse*100)/howManyTime;
        std::cout<<"Flush: "<<aflush<< " in " << howManyTime << " times." << std::endl;
        std::cout<<"Straight: "<<aStraight<< " in "<<howManyTime << " times."<<std::endl;
        std::cout<<"StraightFlush: "<<astraightFlush<< " in " << howManyTime << " times."<<std::endl;
        std::cout<<"RoyalFlush: "<<aroyalFlush<< " in "<< howManyTime << " times." <<std::endl;
        std::cout<<"FullHouse: "<<afullhouse<< " in "<< howManyTime << " times." <<std::endl;
        
    
    return 0;
}
