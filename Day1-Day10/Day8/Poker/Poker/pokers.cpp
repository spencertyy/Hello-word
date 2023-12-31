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
//std::vector <int>
std::vector<Card> creatDeck(){ //funtion的名字creatdeck
   std::vector<std::string> Cardstype = {"Spade", "Heart", "Diamond", "Club"};
    //cardstype是箱子可以装string的东西，装了四个花色，
    std::vector<Card> deck;
 //创建deck的箱子只能放card的东西 creat deck to put in Card.
    for(std::string i : Cardstype){
        //for loop会把cardtype的东西一个一个放进i里面直到东西放完。
        //use for loop get all the cardtype in to i.
        for(int num = 1; num<=13 ; num++){
            //for loop跑从1到13放进num里面。
            Card card;
            //Card的文件夹里面的放一个card
            card.rank = num;
//            把num的东西放进car里面的rank文件
            card.suit = i;
            deck.push_back(card);
        }//把card 里面的东西pushback到deck里面 然后在return deck
    }//
    
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
        }//用deck里面的一叠牌放进print里面然后用forloop跑这些牌，用if除了ajqk的牌cout出来
    }
    
}
void swap(Card & x , Card & y){
    
    Card temp = x;
    x = y;
    y = temp;
}//先给一个swap去打乱扑克牌 using swap shuffle the playing cards

void shuffle(std::vector<Card>& deck){
 for ( int i = 51;i>0;i--){
       int j = rand() % (i+1);
     swap(deck[j] ,deck[i]);
        }//用deck里面的牌放进shuffle里面然后用swap的funtion打乱一副牌
}//for loop all the cards,then Put the cards in the deck into the shuffle and then use swap and rand funtion to shuffle the deck



bool isFlush(const std::vector<Card>deck){
    for ( int i = 0; i<4 ; i++){
        if (deck[i].suit != deck[i+1].suit ){
            return false;
        }
        }
        return true;
    }//用forloop跑五张牌，如果（循环）第一个牌不等于下一张牌then turn false
//Run five cards with a forloop, and if (loop) the first card does not equal the next card then turn false

// Group HW: Poker , under make by shane.

std::vector<Card> getHandCards(std::vector<Card>& cards){
    std::vector<Card> handCards;
    int i=5;
    while (i>0) {
        handCards.push_back(cards[i]);
        i--;
    }
    return handCards;//get the 5 cards
}//用gethandcards（funtion）跑五张牌然后pushback到handcards里面

bool isStraight(const std::vector<Card>& handCard){

    std::vector<int> rankInHandCrad;
    for(Card card:handCard){
        rankInHandCrad.push_back(card.rank);
    }//Use sort to sort the cards
    sort(rankInHandCrad.begin(), rankInHandCrad.end());
    for(int i =0; i<rankInHandCrad.size()-1;i++)
    {        if(rankInHandCrad[i]==rankInHandCrad[i+1]-1){
            return true;//use for loop get the size then see the next size if is +1 then the frist card.
            
        }
        if(rankInHandCrad[i] == 1 and rankInHandCrad[i+1] == 10 and rankInHandCrad[i+2] == 11  and rankInHandCrad[i+3] == 12  and rankInHandCrad[i+4] == 13){
            return true; //see if is 10JQKA
            
        }

    }
    return false;
}
    
    bool isStraightFlush(const std::vector<Card>& handCard){
        if (isFlush(handCard) and isStraight(handCard)) {
            return true;
            //if isFlush and Straight then is StraightFlush
        }
        return false;
    }
    bool isRoyalFlush(const std:: vector<Card>& handCard){
        if(isStraightFlush(handCard) == false){
            return false;
        }//排除isstraightflush的结果就是false
        //Excluding isstraightflush results in false
        std::vector<int> rankInHandCrad;
        for(Card card:handCard){
            rankInHandCrad.push_back(card.rank);
        }//sort the card and see if the first one is not A and the second one if is not 10 get false.
        sort(rankInHandCrad.begin(), rankInHandCrad.end());
        if (rankInHandCrad[0]!=1) {
            return false;
        }//如果第一个不等于1（A）false
        if (rankInHandCrad[1]!=10 ) {
            return false;
        }//如果第二个不等于10（J）false
        return true;
    }
    bool isFullHouse(const std::vector<Card>& handCard){
        std::vector<int> rankInHandCrad;//3带2/fullhouse
        /*for(Card card:handCard){
            rankInHandCrad.push_back(card.rank);
        }*/
        rankInHandCrad = {2,2,3,3,3};
        sort(rankInHandCrad.begin(), rankInHandCrad.end());
        if (rankInHandCrad[0]!=rankInHandCrad[1]) {
            return false;//如果第一个不等于第二个false
            //if the first one not = second one,false.
        }else if (rankInHandCrad[3]!=rankInHandCrad[4]){
            return false;//如果后面两个数字不等于false
        }//If the last two numbers are not equal turn false
        if (rankInHandCrad[2]!=rankInHandCrad[1] and rankInHandCrad[2]!=rankInHandCrad[3] ) {
            return false;
        }//如果前面的两个条件都是true，最后一个条件2不等于1，2不等于3false
        //If both of the first two conditions are true, the last condition is false if the second position is not equal to the first, and the second position is not equal to the third
        return true;
    }
    
    

