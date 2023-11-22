#include "Person.h"
#include <iostream>

using std::cout;
using std:: endl;

//using namespace std is not a good idea

// Constructor
Person::Person(std::string first, std::string last, int arbitrary)
: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    cout << "constructing " << getName() << endl;

}   

Person::Person() : arbitrarynumber(0)
{
    cout << "constructing " << firstname << " " << lastname << endl;
}


/*
In C++, a destructor is a special method of a class that is called 
automatically when an object of the class is destroyed. It has the same 
name as the class, preceded by a tilde (~).

The destructor's main responsibility is to release resources that the 
object may have acquired during its life cycle. This may include freeing 
dynamically allocated memory, closing open files, freeing network connections, 
among other housekeeping tasks.
*/
Person::~Person()
{
    cout << "destructing " << firstname << " " << lastname << endl;
}


std::string Person::getName()
{   
    return firstname + " " + lastname;
}