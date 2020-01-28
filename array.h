#pragma once
#include "object.h"
#include <string.h>
#include "string.h"

class Array: public Object {
    public:
    
    /** Constructor for Array **/
    Array() {}

    // Appends e to end of array
    void push_back(Object* e) {}

    // Inserts e at index i 
    void add(size_t i, Object* e) {}

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
    Object* get(size_t index) {}

    // Returns the hash code value for this array.
    size_t hash() {
        /** calculates the hash code and returns the hash code **/
    }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(Object* o) {}

    //Removes the element at index i
    Object* remove(size_t i) {}

    // Replaces the element at index i with e
    Object* set(size_t i, Object* e) {}

    // Return the number of elements in the array
    size_t length() {
        /** return the arraySize **/
    }

    //destructing an Array
    ~Array() {} 
};

class StrArray: public Object {
public:
    /** Constructor for Array **/
    StrArray() { }

    // Appends e to end of array
    void push_back(String* e) {}

    // Inserts e at index i 
    void add(size_t i, String* e) {}

    // Adds elements in c to end of this array
    void concat(StrArray* c) {}

    // Inserts all of elements in c into this array at index i
    void add_all(size_t i, StrArray* c) {}

    // Removes all of elements from this array
    void clear() { }

    // Compares o with this array for equality.
    bool equals(Object* o) { }

    // Returns the element at index
    String* get(size_t index) { }

    // Returns the hash code value for this array.
    size_t hash() { }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(String* e) { }

    //Removes the element at index i
    String* remove(size_t i) { }

    // Replaces the element at index i with e
    String* set(size_t i, String* e) { }

    // Return the number of elements in the array
    size_t length() { }

    //destructing an Array
    ~StrArray() { } 
};

class IntArray: public Object {
public:
    /** Constructor for Array **/
    IntArray() { }

    // Appends e to end of array
    void push_back(int e) {}

    // Inserts e at index i 
    void add(size_t i, int e) {}

    // Adds elements in c to end of this array
    void concat(IntArray* c) {}

    // Inserts all of elements in c into this array at index i
    void add_all(size_t i, IntArray* c) {}

    // Removes all of elements from this array
    void clear() { }

    // Compares o with this array for equality.
    bool equals(Object* o) { }

    // Returns the element at index
    int get(size_t index) { }

    // Returns the hash code value for this array.
    size_t hash() { }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(int e) { }

    //Removes the element at index i
    int remove(size_t i) { }

    // Replaces the element at index i with e
    int set(size_t i, int e) { }

    // Return the number of elements in the array
    size_t length() { }

    //destructing an Array
    ~IntArray() { } 
};

class FloatArray: public Object {
public:
    /** Constructor for Array **/
    FloatArray() { }

    // Appends e to end of array
    void push_back(float e) {}

    // Inserts e at index i 
    void add(size_t i, float e) {}

    // Adds elements in c to end of this array
    void concat(FloatArray* c) {}

    // Inserts all of elements in c into this array at index i
    void add_all(size_t i, FloatArray* c) {}

    // Removes all of elements from this array
    void clear() { }

    // Compares o with this array for equality.
    bool equals(Object* o) { }

    // Returns the element at index
    float get(size_t index) { }

    // Returns the hash code value for this array.
    size_t hash() { }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(float e) { }

    //Removes the element at index i
    float remove(size_t i) { }

    // Replaces the element at index i with e
    float set(size_t i, float e) { }

    // Return the number of elements in the array
    size_t length() { }

    //destructing an Array
    ~FloatArray() { } 
};

class BoolArray: public Object {
public:
    /** Constructor for Array **/
    BoolArray() { }

    // Appends e to end of array
    void push_back(bool e) {}

    // Inserts e at index i 
    void add(size_t i, bool e) {}

    // Adds elements in c to end of this array
    void concat(BoolArray* c) {}

    // Inserts all of elements in c into this array at index i
    void add_all(size_t i, BoolArray* c) {}

    // Removes all of elements from this array
    void clear() { }

    // Compares o with this array for equality.
    bool equals(Object* o) { }

    // Returns the element at index
    bool get(size_t index) { }

    // Returns the hash code value for this array.
    size_t hash() { }
    
    // Returns the index of the first occurrence of o, or number greater than size() if not there
    size_t index_of(bool e) { }

    //Removes the element at index i
    bool remove(size_t i) { }

    // Replaces the element at index i with e
    bool set(size_t i, bool e) { }

    // Return the number of elements in the array
    size_t length() { }

    //destructing an Array
    ~BoolArray() { } 
};
