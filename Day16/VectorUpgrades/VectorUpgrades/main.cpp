//
//  main.cpp
//  VectorUpgrades
//
//  Created by YuYao Tu on 9/13/23.
//

#include <iostream>
#include "VectorUpgrades.hpp"
int main(int argc, const char * argv[]) {
    
    myVector v1 = myVector(5);
    myVector v2 = myVector(5);
    
    //assert(myVec.get(0) == 0);
    //    assert(myVec.get(1) == 0);
    //    assert(myVec.get(2) == 0);
    
    v1.pushback(2);
    v1.pushback(3);
    v1.pushback(3);
//    v1.pushback(3);
    
    v2.pushback(4);
    v2.pushback(5);
    v2.pushback(3);
    
    
    
//    assert(v1.get(0) == 1);
//    assert(v1.get(1) == 2);
//    assert(v1.get(2) == 3);
    
    
    
//    v1.pushback(1);
//    assert(v1[1] == 2);
//    
//    v1.popback();//every time call the function need to add the ().
//    assert(v1.get(2) == 3);  // Should be 0 after popBack
//    
//    size_t oldCapacity = v1.getCapacity();
//    v1.growVector();//every time call the function need to add the ().
//    assert(v1.getCapacity() == oldCapacity * 2);
//    
//    
//    
//    v1.destructor();//every time call the function need to add the ().
//    assert(v1.getSize() == 0);
//    assert(v1.getCapacity() == 0);
//    
    
    if(v1 == v2){
        std::cout<< "== is ture "<< std::endl;
    }else{
        std::cout<<"== is false"<<std::endl;
    }

    if(v1 != v2){
        std::cout<< "!= is ture "<< std::endl;
    }else{
        std::cout<<"!= is false"<<std::endl;
    }
    
    if(v1 < v2){
        std::cout<< "< is ture "<< std::endl;
    }else{
        std::cout<<"< is false"<<std::endl;
    }
    
    if(v1 <= v2){
        std::cout<< "<= is ture "<< std::endl;
    }else{
        std::cout<<"<= is false"<<std::endl;
    }
    if(v1 >= v2){
        std::cout<< ">= is ture "<< std::endl;
    }else{
        std::cout<<">= is false"<<std::endl;
    }
    if(v1 > v2){
        std::cout<< "> is ture "<< std::endl;
    }else{
        std::cout<<"> is false"<<std::endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    std::cout << "All tests passed!" << std::endl;
    
    return 0;
};

