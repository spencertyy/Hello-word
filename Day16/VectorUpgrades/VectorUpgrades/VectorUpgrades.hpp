//
//  VectorUpgrades.hpp
//  VectorUpgrades
//
//  Created by YuYao Tu on 9/13/23.
//

#ifndef VectorUpgrades_hpp
#define VectorUpgrades_hpp

#include <stdio.h>
class myVector {//methods
private:
    int* data;
    size_t size_;
    size_t capacity_;
public:
    myVector(const int initialCapacity);
    void destructor();
    ~myVector();
    void pushback(int num);
    void set(int index, int newValue);
    void growVector( );
    int popback();
    int get(int index) const;
    
    size_t getSize()const;
    size_t getCapacity();
    
    myVector& operator=(const myVector& rhs);
    myVector(const myVector&rhs);//copy construtor
    int& operator[](size_t index);
    const int& operator[](size_t index)const;
    bool operator==(const myVector& rhs);
    bool operator!=(const myVector& rhs);
    bool operator<(const myVector& rhs);
    bool operator<=(const myVector& rhs);
    bool operator>=(const myVector& rhs);
    bool operator>(const myVector& rhs);
};
#endif /* DiyVectorPart2_hpp */
