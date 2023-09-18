//
//  DiyVectorPart2.cpp
//  DiyVectorPart2
//
//  Created by YuYao Tu on 9/12/23.
//

#include "DiyVectorPart2.hpp"
#include <iostream>
#include <cassert>


//part2
myVector::myVector(int initialCapacity) {
    size_ = 0; //创一个值为0
    capacity_ = initialCapacity; //让容量等于initialCapacity
    data = new int [initialCapacity]; //create a new data for the initialCapacity
}

void  myVector::freeVector(){//清空之前的空间
    delete [] data;//delete the old data.
    data=nullptr; //取消指针的指向
    size_=0;
    capacity_=0;
    std::cout << "Destructor called"<<std::endl;
}

void myVector::pushback(int num) {//pushback 1 in to the size.
    // check if we need to growVector
    if (size_ == capacity_) {
        growVector();// if they are =,call the growVector function get the *2 capacity so we can pushback the new number.
    }
    else if ( size_ > capacity_){
        std::cout << "Oh !! No" << std::endl;
    }
   data[size_] = num;
   size_ += 1;//size= size +1.

}

void myVector::popback(){ //popback(remove the last number in the size)
    assert(size_!=0 && "Vector is empty"); //check is the size is empty or not.
    size_ -- ;// if is not empty we popback 1 for use size_ --.
}

int myVector::get(int index){//return index位置上的数字
    std:: cout << index << size_ << std:: endl;
    assert(index <= size_ && " index out bound error!!");//use assert check if the index is bigger and = then the size,if so we return data[index]
    return data[index];
}

void myVector::set( int index, int newValue){//put the newValue to myVector at the index position
    if(index <= size_ && index>=0 ){ //check if the size bigger then the index and index is bigger then 0.
        data[index]= newValue;
        if(index == size_){
            size_++;
        }
    }
}

void myVector::growVector(){
    int* temp = new int[capacity_ * 2];//创建一个新的heap并且增加2倍容量
    // copy data from myVector to temp
    for( int i = 0; i < capacity_; i++ ) {
       temp[ i ] = data[ i ];//复制内容到temp里面
    }
    delete [ ] data;//删除data的老数据
    data = temp;//把指针指向data的资料改成指向temp的资料
    temp = nullptr;//在删除对于temp的指针，留下data的指针
    capacity_ *= 2;//增加myVector.capacity两倍的容量使得可以用新的heap

}

size_t myVector::getSize(){ //create a getsize and return our private size,so we can call the getsize for get the size.
    return size_;
}
size_t myVector::getCapacity(){//same as the getsize just for the capacity_
    return capacity_;
}
