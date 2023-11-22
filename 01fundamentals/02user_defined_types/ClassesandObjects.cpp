// ClassesandObjects.cpp: Defines the entry point for the
// console application

#include "Person.h"
// Tweeter.h is already incluing Person.h
// with #pragma once on the .h files, we solve the problem
// of including on circles (multiple times). include of includes.
// So we still can include Person.h without any problem because of 
// pragma once on the .h files.
#include "Tweeter.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Kate", "Gregory", 123);
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        // We can call this function from Person.cpp because Tweeter t1 is a Person object
        std::string name2 = t1.getName();
    }

    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();

    // Private      
    //int i = p1.arbitraynumber;

    // Using status.h (enum class / scoped enum and enum)
    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0;   
}   

/*
// Scope of p2
// After this block, p2 will be destroyed
{
Person p2;
}
*/