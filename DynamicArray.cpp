#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    size = 0;
    arr = new int[0];
}

DynamicArray::DynamicArray(const int*ptr, int size) {
    this->size = size;
    this->arr = new int[size];

    for(int i = 0; i < size; i++)
        arr[i] = ptr[i];
}

DynamicArray::DynamicArray(const DynamicArray &o) {
    this->size = o.size;
    this->arr = new int[o.size];

    for(int i = 0; i < size; i++)
        arr[i] = o.arr[i];
}

void DynamicArray::resize(int newSize) {
    int *tmp = new int[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = arr[i];
    delete[] arr;
    size = newSize;
    arr = tmp;
}

void DynamicArray::push_back(int elem) {
    resize(size+1);
    arr[size-1]=elem;
    
}

void DynamicArray::insert(int elem,int pos) {
    if(pos < 0 || pos > size)
        return;
    resize(size+1);
    for(int i = size-1; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos]=elem;
}

void DynamicArray::remove(int pos) {
    if(pos < 0 || pos > size)
        return;
    for(int i = pos; i < size; i++)
        arr[i] = arr[i +1];
    resize(size-1);
}

void DynamicArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

DynamicArray::~DynamicArray() {
    delete []arr;
}
