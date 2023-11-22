#pragma once
#include <string>

// IMPORTANT: In header file always call things by their FULL NAMES 

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

    public: 
        // Constructor
        Person(std::string first, std::string last, int arbitrary);

        // Ask the compiler to generate:
        // Person()=default;

        Person();
        
        // Destructor
        ~Person();


        std::string getName();
};