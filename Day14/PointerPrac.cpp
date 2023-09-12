#include "PointerPrac.hpp"



double arrayModSum(MyVector& someVar, int size) {
    for (int i = 0; i < size; i++) {
        someVar.data[i] += 1.0;
    }
//The function must first modify someVar.data by adding 1 to each element
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += someVar.data[i];
    }//full in all the number to the data.

    return sum;
}

void growMyVector ( MyVector& someVar){
    if(someVar.size == someVar.capacity){
        int newCapacity = someVar.capacity * 2;
        //Dynamically allocate memory for a temporary array that is twice the size of the original. This will require a double *.
        double* tempArray = new double[newCapacity];
        for (int i = 0; i < someVar.size; i++) {
               tempArray[i] = someVar.data[i];//2. Copy the contents over from someVar.data to this temp array by looping over the temp array.
           }
        for (int i = someVar.size; i < newCapacity; i++) {
            tempArray[i] = -1.0;
        }//when you're done growing the vector, the size will be the same (since the number of elements has not changed), but the capacity will be double its original value. We will fill the empty spots with -1.0.
        
        delete[] someVar.data;//3. Call delete[] on someVar.data to free up the old chunk of memory.
    
    someVar.data = tempArray;//4. Set someVar.data = the pointer to the temp array.
        tempArray = nullptr;//5. Set the pointer to the temp array to nullptr.
           someVar.capacity = newCapacity;
        someVar.size = newCapacity;
    }
}


#include <iostream>
#include "PointerPrac.hpp"
int main(int argc, const char * argv[]) {
 
    MyVector vec1;

  std::cout << "Enter the size of the array: ";
    std::cin >> vec1.size;
    vec1.data = new double[vec1.size];
    vec1.capacity = vec1.size;

    for (int i = 0; i < vec1.size; i++) {
        vec1.data[i] = 1.0;
    }// loop over the newly created array and fill each element with 1.0.
    double sum = arrayModSum(vec1, vec1.size);

    std::cout<< "Modified sum: "<< sum<<std::endl;

    delete[] vec1.data;

    
    // Initialize vec1 with initial values
    vec1.size = 5;
    vec1.capacity = 5;
    vec1.data = new double[vec1.capacity];

    // Fill the initial vector with some values
    for (int i = 0; i < vec1.size; i++) {
        vec1.data[i] = static_cast<double>(i);
    }

    // Call the growMyVector function
    growMyVector(vec1);

    // Verify the updated capacity
    std::cout << "Updated capacity: " << vec1.capacity << std::endl;

    // Clean up allocated memory
    delete[] vec1.data;

    
    return 0;
}

#ifndef PointerPrac_hpp
#define PointerPrac_hpp

#include <stdio.h>


struct MyVector {
    double* data;
//    = new double[10];
   int size;
   int capacity;
};

double arrayModSum(MyVector& someVar, int size); 
void growMyVector ( MyVector& someVar);

#endif /* PointerPrac_hpp */
