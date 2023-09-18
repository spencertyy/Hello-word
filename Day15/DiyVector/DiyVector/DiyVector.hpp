//
//  DiyVector.hpp
//  DiyVector
//
//  Created by YuYao Tu on 9/12/23.
//

#ifndef DiyVector_hpp
#define DiyVector_hpp

#include <stdio.h>
//part1
struct myVector {
    int* data;
    size_t size,capacity;

};


myVector makeVector(int initialCapacity );
void freeVector(myVector& vector);
void pushback(myVector& myVector, int num);
int popback(myVector& myVector);
int get(myVector&myVector, int index);
void set(myVector&myVector, int index, int newValue);
void growVector(myVector& myVector);

#endif /* DiyVector_hpp */
