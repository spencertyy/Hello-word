//
//  VectorUpgrades.cpp
//  VectorUpgrades
//
//  Created by YuYao Tu on 9/13/23.
//

#include "VectorUpgrades.hpp"
#include <iostream>
#include <cassert>

myVector::myVector(const int initialCapacity) {
    size_ = 0;
    capacity_ = initialCapacity;
    data = new int [initialCapacity];
    //create a new initialCapacity to heap
}

void  myVector::destructor(){
    delete [] data;//delete the old data.
    data=nullptr;
    size_=0;
    capacity_=0;
    std::cout << "Destructor called"<<std::endl;
}

void myVector::pushback(int num) {
    // TODO check if we need to growVector
    if (size_ == capacity_) {
        growVector();
    }
   data[size_] = num;
   size_ += 1;

}

int myVector::popback(){//delate the last one in the size.
    int num = data[size_ - 1];
    size_ -= 1;
    return num;
}

int myVector::get(int index) const{// get the data to the index
    return data[index];
}

void myVector::set( int index, int newValue){
    if(size_ > index && index>=0 ){ //check if the size bigger then the index and index is bigger then 0.
        data[index]= newValue; // put the newValue to the data index
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

size_t myVector::getSize()const{//get the private size to the public getsize.
    return size_;
}
size_t myVector::getCapacity(){//same as before
    return capacity_;
}



myVector& myVector::operator=(const myVector& rhs){ // make them =
    if(this != &rhs){ // frist if thet are no =. delete the old one and let the size = to the new one,capacity*2 make more size.
        delete []data;
        data=nullptr;
        size_= rhs.getSize();
        capacity_=2*size_;
        
        if(capacity_>0){ //if capacity is bigger then 0,create a new one at the heap,
            data = new int[capacity_];
            for(size_t i=0;i<getSize();i++){//use for loop get all the size and put in to the new one(rhs)
                data[i]= rhs.get(i);
            }
        }
    }
    return *this;
}

myVector::myVector(const myVector&rhs){//this is copy same function doing before
    if(this != &rhs){
        delete []data;
        data=nullptr;
        size_= rhs.getSize();
        capacity_=2*size_;
        
        if(capacity_>0){
            data = new int[capacity_];
            for(size_t i=0;i<getSize();i++){
                data[i]= rhs.get(i);
            }
        }
    }
}

// int myVector::operator[](size_t index) const {
//     assert(index< size_ && "Out of bounds in Operator[]!");
//     return data[index];
//}

const int& myVector:: operator[](size_t index)const{ // make the date can define the object [index]
    assert(index< size_ && "Out of bounds in Operator[]!");
    return data[index];//This operator is typically used to access elements of an array or class object. By overloading the [] operator, you can define the subscript access behavior of an object so that it can be used like an array.
}

bool myVector::operator==(const myVector& rhs) {
    if(size_ !=rhs.getSize()){//boolean see if the size are no = turn false
        return false;
    }
    for(size_t i=0;i<size_;i++){//use for loop get the all the size and see if the data no = turn false
        if(data[i]!=rhs.data[i]){
            return false;
        }
    }
    return true;
}

bool myVector::operator!=(const myVector& rhs) {
    return !(*this == rhs);
}

bool myVector::operator<(const myVector& rhs) {
//    size_t minSize = std::min(size_, rhs.getSize());
    for(size_t i =0; i<size_;i++){//use for loop see if the size bigger or = trun false
        if(size_>rhs.getSize()){ //|| size_==rhs.getSize()
            return false;
        }
    }
    for(size_t i=0;i<size_;i++){//see if the data bigger or == trun false
        if(data[i]>rhs.data[i] ){ //|| data[i]==rhs.data[i] 
            return false;
        }
    }
    return true;
}
bool myVector::operator<=(const myVector& rhs) {
    return (*this < rhs)||(*this == rhs);
}
bool myVector::operator>(const myVector& rhs){
    return !(*this < rhs)&&!(*this == rhs);
}
bool myVector::operator>=(const myVector& rhs){
    return (*this > rhs)||(*this == rhs);
}

