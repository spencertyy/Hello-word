//
//  main.cpp
//  DiyVectorPart2
//
//  Created by YuYao Tu on 9/12/23.
//

#include <iostream>
#include "DiyVectorPart2.hpp"


int main(int argc, const char * argv[]) {
    
    myVector myVec = myVector(5);
    assert(myVec.getSize()==0);
    assert(myVec.getCapacity()==5);
    assert(myVec.get(0) == 0);
//    assert(myVec.get(1) == 0);
//    assert(myVec.get(2) == 0);

    
    
    myVec.pushback(1);
    myVec.pushback(2);
    myVec.pushback(3);


    
    assert(myVec.get(0) == 1);
    assert(myVec.get(1) == 2);
    assert(myVec.get(2) == 3);

    
    
    myVec.set(1, 5);
    assert(myVec.get(1) == 5);
    
    myVec.popback();//every time call the function need to add the ().
    assert(myVec.get(2) == 3);  // Should be 0 after popBack

    size_t oldCapacity = myVec.getCapacity();
    myVec.growVector();//every time call the function need to add the ().
    assert(myVec.getCapacity() == oldCapacity * 2);


    
     myVec.freeVector();//every time call the function need to add the ().
     assert(myVec.getSize() == 0);
     assert(myVec.getCapacity() == 0);


    
    std::cout << "All tests passed!" << std::endl;

    return 0;
}
