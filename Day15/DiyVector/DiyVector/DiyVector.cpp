//
//  DiyVector.cpp
//  DiyVector
//
//  Created by YuYao Tu on 9/12/23.
//
#include <iostream>
#include <cassert>
#include "DiyVector.hpp"
//part1
myVector makeVector(int initialCapacity){
    myVector vector;
    vector.size =0;
    vector.capacity=initialCapacity;
    vector.data = new int [initialCapacity];
    //create a new initialCapacity to heap
    return vector;
};

void freeVector(myVector& vector){
    delete [] vector.data;//delete the old data.
    vector.data=nullptr;
    vector.size=0;
    vector.capacity=0;
    std::cout << "Destructor called"<<std::endl;
}
void pushback(myVector& myVector, int num) {
    // TODO check if we need to growVector
    if (myVector.size == myVector.capacity) {
        growVector(myVector);
}
    myVector.data[myVector.size] = num;
    myVector.size += 1;

}

int popback(myVector& myVector){
    int num = myVector.data[myVector.size - 1];
    myVector.size -= 1;
    return num;
}
// return the appropriate value in the vector. This should work like [] does for std::vectors
int get(myVector&myVector, int index){
    return myVector.data[index];
}

void set(myVector& myVector, int index, int newValue){
    if(myVector.size > index && index>=0 ){
//check if the size bigger then the index and index is bigger then 0.
        myVector.data[index]= newValue;
    }
}

void growVector(myVector& myVector){
    int* temp = new int[myVector.capacity * 2];//创建一个新的heap并且增加2倍容量
    // copy data from myVector to temp
    for( int i = 0; i < myVector.capacity; i++ ) {
       temp[ i ] = myVector.data[ i ];//复制内容到temp里面
    }
    delete [ ] myVector.data;//删除data的老数据
    myVector.data = temp;//把指针指向data的资料改成指向temp的资料
    temp = nullptr;//在删除对于temp的指针，留下data的指针
    myVector.capacity *= 2;//增加myVector.capacity两倍的容量使得可以用新的heap

}
