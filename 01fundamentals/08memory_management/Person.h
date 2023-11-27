#pragma once
#include <string>
#include "Resource.h"

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;
        Resource* pResource;

        // "There is a function outhere called less than that takes an integer
        //  and a Person by const reference, and that function is a friend.
        // She is allowed to see this private attributes!!!"
        friend bool operator<(int i, Person const& p);

    public:
        Person(std::string firstname, std::string lastname, int arbitrary);
        // IMPORTANT FOR MEMORY MANAGEMENT (DESTRUCTOR)
        ~Person();

        //IMPORTANT FOR MEMORY MANAGEMENT (COPY CONSTRUCTOR)
        Person(Person const& p);

        //IMPORTANT FOR MEMORY MANAGEMENT (COPY ASSIGNMENT OPERATOR)
        Person& operator=(const Person& p);


        // IMPORTANT FOR MEMORY MANAGMENT
        void AddResource();
        




        std::string GetName() const;
        int GetNumber() const { return arbitrarynumber; }
        void SetNumber(int number) { arbitrarynumber = number; }
        void SetFirstName(std::string first) { firstname = first;}




        // OVERLOAD FOR OPERATORS IN C++
        bool operator<(Person const& p) const;
        bool operator<(int i) const;
};
    
bool operator<(int i, Person const& p);