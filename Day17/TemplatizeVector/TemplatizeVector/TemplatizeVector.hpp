//
//  TemplatizeVector.hpp
//  TemplatizeVector
//
//  Created by YuYao Tu on 9/14/23.
//

#ifndef TemplatizeVector_hpp
#define TemplatizeVector_hpp

#include <iostream>

template <typename T>
class myVector {//methods
private:
    T* data;
    size_t size_;
    size_t capacity_;
public:
    myVector(size_t initialCapacity);
    ~myVector();
    void destructor();
    void pushback(T num);
    void set(size_t index, T newValue);
    void growVector( );
    T popback();
    T get(size_t index) const;

    size_t getSize()const;
    size_t getCapacity();

    myVector<T>& operator=(const myVector<T>& rhs);
    myVector(const myVector<T>&rhs);//copy construtor
    T& operator[](size_t index);
    const T& operator[](size_t index)const;
    bool operator==(const myVector<T>& rhs);
    bool operator!=(const myVector<T>& rhs);
    bool operator<(const myVector<T>& rhs);
    bool operator<=(const myVector<T>& rhs);
    bool operator>=(const myVector<T>& rhs);
    bool operator>(const myVector<T>& rhs);
};

template <typename T>
myVector<T>::myVector(size_t initialCapacity) {
    size_ = 0;
    capacity_ = initialCapacity;
    data = new T [initialCapacity];
}

template<typename T>
myVector<T>::~myVector() {
    delete [] data;//delete the old data.
    data=nullptr;
    size_=0;
    capacity_=0;
    std::cout << "Destructor called"<<std::endl;
}

template <typename T>
void  myVector<T>::destructor(){
    delete [] data;//delete the old data.
    data=nullptr;
    size_=0;
    capacity_=0;
    std::cout << "Destructor called"<<std::endl;
}

template <typename T>
void myVector<T>::pushback(T num) {
    // TODO check if we need to growVector
    if (size_ == capacity_) {
        growVector();
    }
   data[size_] = num;
   size_ += 1;

}
template <typename T>
T myVector<T>::popback(){
    int num = data[size_ - 1];
    size_ -= 1;
    return num;
}
template <typename T>
T myVector<T>::get(size_t index) const{
    return data[index];
}
template <typename T>
void myVector<T>::set( size_t index, T newValue){
    if(size_ > index && index>=0 ){ //check if the size bigger then the index and index is bigger then 0.
        data[index]= newValue;
    }
}
template <typename T>
void myVector<T>::growVector(){
    T* temp = new T[capacity_ * 2];//创建一个新的heap并且增加2倍容量
    // copy data from myVector to temp
    for( size_t i = 0; i < capacity_; i++ ) {
       temp[ i ] = data[ i ];//复制内容到temp里面
    }
    delete [ ] data;//删除data的老数据
    data = temp;//把指针指向data的资料改成指向temp的资料
    temp = nullptr;//在删除对于temp的指针，留下data的指针
    capacity_ *= 2;//增加myVector.capacity两倍的容量使得可以用新的heap

}
template <typename T>
size_t myVector<T>::getSize()const{
    return size_;
}
template <typename T>
size_t myVector<T>::getCapacity(){
    return capacity_;
}


template <typename T>
myVector<T>& myVector<T>::operator=(const myVector& rhs){
    if(this != &rhs){
        delete []data;
        data=nullptr;
        size_= rhs.getSize();
        capacity_=2*size_;
        
        if(capacity_>0){
            data = new T[capacity_];
            for(size_t i=0;i<getSize();i++){
                data[i]= rhs.get(i);
            }
        }
    }
    return *this;
}
template <typename T>
myVector<T>::myVector(const myVector<T>&rhs){
    if(this != &rhs){
        delete []data;
        data=nullptr;
        size_= rhs.getSize();
        capacity_=2*size_;
        
        if(capacity_>0){
            data = new T[capacity_];
            for(size_t i=0;i<getSize();i++){
                data[i]= rhs.get(i);
            }
        }
    }
}
template <typename T>
 T& myVector<T>::operator[](size_t index){
     assert(index< size_ && "Out of bounds in Operator[]!");
     return data[index];
}
template <typename T>
const T& myVector<T>:: operator[](size_t index)const{
    assert(index< size_ && "Out of bounds in Operator[]!");
    return data[index];
}
template <typename T>
bool myVector<T>::operator==(const myVector<T>& rhs) {
    if(size_ !=rhs.getSize()){
        return false;
    }
    for(size_t i=0;i<size_;i++){
        if(data[i]!=rhs.data[i]){
            return false;
        }
    }
    return true;
}
template <typename T>
bool myVector<T>::operator!=(const myVector<T>& rhs) {
    return !(*this == rhs);
}
template <typename T>
bool myVector<T>::operator<(const myVector<T>& rhs) {
    size_t minSize = std::min(size_, rhs.getSize());
    for(size_t i=0;i<minSize;i++){
        if(data[i]>rhs.data[i] || data[i]==rhs.data[i] ){
            return false;
        }
    }
    return true;
}
template <typename T>
bool myVector<T>::operator<=(const myVector<T>& rhs) {
    return (*this < rhs)||(*this == rhs);
}
template <typename T>
bool myVector<T>::operator>=(const myVector<T>& rhs){
    return !(*this <= rhs);
}
template <typename T>
bool myVector<T>::operator>(const myVector<T>& rhs){
    return !(*this < rhs);
}

#endif /* TemplatizeVector_hpp */
