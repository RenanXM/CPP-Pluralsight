#pragma once
#include "Person.h"
#include <string>

class Tweeter :
    // Inheritance
    public Person
{
    private:
        std::string twitterhandle;
    public:
        // Constructor
        Tweeter(std::string first,
            std::string last,
            int arbitray,
            std::string handle);

        // Destructor    
        ~Tweeter();
}; 
