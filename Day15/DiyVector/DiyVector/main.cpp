//
//  main.cpp
//  DiyVector
//
//  Created by YuYao Tu on 9/12/23.
//

#include <iostream>
#include "DiyVector.hpp"

int main(int argc, const char * argv[]) {
    
    
    myVector myVec = makeVector(5);
    
    assert(get(myVec, 0) == 0);
    assert(get(myVec, 1) == 0);
    assert(get(myVec, 2) == 0);

    
    
    pushback(myVec, 1);
    pushback(myVec, 2);
    pushback(myVec, 3);


//    assert(popback(myVec) == 1);
    
    assert(get(myVec, 0) == 1);
    assert(get(myVec, 1) == 2);
    assert(get(myVec, 2) == 3);

    
    
    set(myVec, 1, 5);
    assert(get(myVec, 1) == 5);
    
    popback(myVec);
    assert(get(myVec, 2) == 3);  // Should be 0 after popBack

    int oldCapacity = myVec.capacity;
    growVector(myVec);
    assert(myVec.capacity == oldCapacity * 2);


    
      freeVector(myVec);
     assert(myVec.size == 0);
     assert(myVec.capacity == 0);
     assert(myVec.data == nullptr);

        std::cout << "All tests passed!" << std::endl;

    
    return 0;
}
