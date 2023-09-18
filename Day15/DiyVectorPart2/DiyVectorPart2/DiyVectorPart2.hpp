//
//  DiyVectorPart2.hpp
//  DiyVectorPart2
//
//  Created by YuYao Tu on 9/12/23.
//

#ifndef DiyVectorPart2_hpp
#define DiyVectorPart2_hpp

#include <stdio.h>
//part2
class myVector {//methods
 private:
    int* data;
    size_t size_;
    size_t capacity_;
public:
    myVector(int initialCapacity);
    void freeVector();
    void pushback(int num);
    void set(int index, int newValue);
    void growVector( );
    void popback();
    int get(int index);

    size_t getSize();
    size_t getCapacity();

};
#endif /* DiyVectorPart2_hpp */
