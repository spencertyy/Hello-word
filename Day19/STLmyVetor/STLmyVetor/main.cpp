//
//  main.cpp
//  STLmyVetor
//
//  Created by YuYao Tu on 9/19/23.
//

#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include "STLmyVetor.hpp"

void testCase(){
//    myVector<int> myVec(5);
    myVector<int> myVec(new int[] {1,9,4,15,0,3}, 6);
    
    std::sort(myVec.begin(), myVec.end());//排序
    for(int x :myVec){
        std::cout<< x << " " ;
    }
    
    auto minElement=std::min_element(myVec.begin(), myVec.end());//找最小
    std::cout<<" Minimum element: "<< *minElement <<std::endl;
    
    int sum= std::accumulate(myVec.begin(), myVec.end(),0);//求和
    std::cout<<"sum of elements:"<< sum <<std::endl;
    
//    Challenge question: Use std::remove_if and your pop-back function to delete all the even numbers in your vector.
    
    
    
    int* newEnd = std::remove_if(myVec.begin(), myVec.end(), [](int x) {return x % 2 == 0;});
    std::cout<<"the number newEnd points:  "<< *newEnd <<std::endl;
    std::cout << "myVec after remove_if: \n";
    for(int x :myVec){
        std::cout<< x << " " ;
    }
    int numEven = myVec.end() - newEnd;
    for (int i = 0; i < numEven; i++) {
        myVec.popback(); //use popback delate numEven = myVec.end() - newEnd;
    }
    std::cout << "\nmyVec after popback: \n";
    for(int x :myVec){
        std::cout<< x << " " ;
    }
//myVec = 0,1,3,4,9,15,
//        ^             ^
//       begin         end
//remove= 1,3,9,15,9,15,
//        ^        ^    ^
//       begin  newEnd  end
//end- newEnd
    
//    {return x % 2 == 0;});
//    myVector<char> v6(10);
//    myVector<char> v7(10);
//    const char char1 = 'a';
//    v7.pushback(char1);
//    assert(v7.get(v7.getSize()-1) == char1);
//
//    const char char2 = 'b';
//    v7.pushback(char2);
//
//    if(char1 == char2){
//        std::cout<< "== is ture "<< std::endl;
//    }else{
//        std::cout<<"== is false"<<std::endl;
//    }
//
//    if(char1 != char2){
//        std::cout<< "!= is ture "<< std::endl;
//    }else{
//        std::cout<<"!= is false"<<std::endl;
//    }
//
//    if(char1 < char2){
//        std::cout<< "< is ture "<< std::endl;
//    }else{
//        std::cout<<"< is false"<<std::endl;
//    }
//
//    if(char1 <= char2){
//        std::cout<< "<= is ture "<< std::endl;
//    }else{
//        std::cout<<"<= is false"<<std::endl;
//    }
//    if(char1 >= char2){
//        std::cout<< ">= is ture "<< std::endl;
//    }else{
//        std::cout<<">= is false"<<std::endl;
//    }
//    if(char1 > char2){
//        std::cout<< "> is ture "<< std::endl;
//    }else{
//        std::cout<<"> is false"<<std::endl;
//    }
//
//    myVector<double> v8(10);
//    myVector<double> v9(10);
//    const double db1 = 0.123;
//    const double db2 = 0.321;
//    v8.pushback(db1);
//    v9.pushback(db1);
//
//    if(db1 == db2){
//        std::cout<< "0.123== 0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123==0.321 is false"<<std::endl;
//    }
//
//    if(db1 != db2){
//        std::cout<< "0.123!=0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123!=0.321 is false"<<std::endl;
//    }
//
//    if(db1 < db2){
//        std::cout<< "0.123< 0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123<0.321 is false"<<std::endl;
//    }
//
//    if(db1 <= db2){
//        std::cout<< "0.123<=0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123<= 0.321 is false"<<std::endl;
//    }
//    if(db1 >= db2){
//        std::cout<< "0.123>=0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123>= 0.321is false"<<std::endl;
//    }
//    if(db1 > db2){
//        std::cout<< "0.123>0.321 is ture "<< std::endl;
//    }else{
//        std::cout<<"0.123>0.321 is false"<<std::endl;
//    }
//

}
int main(int argc, const char * argv[]) {
    
    testCase();
//    myVector<int> myVec(5);

//
//    assert(myVec.get(0) == 0);
//    assert(myVec.get(1) == 0);
//    assert(myVec.get(2) == 0);
//
//
//
//    myVec.pushback(1);
//    myVec.pushback(2);
//    myVec.pushback(3);
//
//
//
//    assert(myVec.get(0) == 1);
//    assert(myVec.get(1) == 2);
//    assert(myVec.get(2) == 3);
//
//
//
//    myVec.set(1, 5);
//    assert(myVec.get(1) == 5);
//
//    myVec.popback();//every time call the function need to add the ().
//    assert(myVec.get(2) == 3);  // Should be 0 after popBack
//
//    size_t oldCapacity = myVec.getCapacity();
//    myVec.growVector();//every time call the function need to add the ().
//    assert(myVec.getCapacity() == oldCapacity * 2);
//
//
//
//     myVec.destructor();//every time call the function need to add the ().
//     assert(myVec.getSize() == 0);
//     assert(myVec.getCapacity() == 0);
//
//
//
//    std::cout << "All tests passed!" << std::endl;

    return 0;
};


