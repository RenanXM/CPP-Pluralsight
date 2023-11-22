#include "Tweeter.h"
#include <iostream>


// Constructor 
Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle):
    // Pass the first three to the Person
    Person(first, last, arbitrary),
    // The last one to initialize twitterhandle
    twitterhandle(handle)
{
    std::cout << "constructing tweeter " << 
        twitterhandle << std::endl;
}

// Destructor
Tweeter::~Tweeter()
{
    std::cout << "destructing tweeter " << twitterhandle << std::endl;
}
