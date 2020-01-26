#pragma once
#include "object.h"
#include <string.h>
#include "string.h"

class Array: public Object {
    public:
    size_t arraySize;
    void** elements;
    
    /** Constructor for Array **/
    Array() {
        arraySize = 0;
        elements = nullptr;
    }

    // Appends e to end of array
    void push_back(void* e) {}

    // Inserts e at index i 
    void add(size_t i, void* e) {}

    // Adds elements in c to end of this array
    void concat(Array* c) {}

    // Inserts all of elements in c into this array at index i
    void add_all(size_t i, Array* c) {}

    // Removes all of elements from this array
    void clear() {
        /** assign all the elements to nullptr but maintain the list size **/
    }

    // Compares o with this array for equality.
    bool equals(Object* o) {
        /** cast Object* o to Array and check if each element in this Array matches elements in o **/   
    }

    // Returns the element at index
    void* get(size_t index) {}

    // Returns the hash code value for this array.
    size_t hash() {
        /** calculates the hash code and returns the hash code **/
    }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(Object* o) {}

    //Removes the element at index i
    void* remove(size_t i) {}

    // Replaces the element at index i with e
    void* set(size_t i, Object* e) {}

    // Return the number of elements in the array
    size_t length() {
        /** return the arraySize **/
    }

    //destructing an Array
    ~Array() {
        delete[] elements;
    } 
};
