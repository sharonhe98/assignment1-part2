#pragma once
#include "object.h"
#include <string.h>

class String : public Object {
    public:

    char* val;
    size_t size;

    // default constructor
    String() {
        size = 0;
        val = nullptr;
    }

    // constructor takes in char array 
    String(char* c) {
        size = strlen(c);
        val = new char[size];

        for (size_t i = 0; i < size; i++) {
            val[i] = c[i];
        }
    }

    // compares two strings and returns the val number
    int compare(String* s) {
        /** Use strcmp from the string.h library to return the int **/
    }

    // concats two strings
    String* concat(String* s) {
        /** Use strcpy and strcat from the string.h library to return the int **/
    }

    // return hash code
    size_t hash() {
        /** calculates the hash for the String **/
    }

    // check if two Strings are equal
    bool equals(Object *other) {
        /** Cast Object to String* and compare **/
    }

    // returns the length of the string
    size_t length() {
        /** returns variable length **/
    }

    //destructing a string
    ~String() {
        delete[] val;
    }

};