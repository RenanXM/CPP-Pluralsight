// MEMBER FUNCTIONS (CONST) DOES NOT CHANGE ANY
// ATTRIBUTE OF THE CLASS

#pragma once
#include <string>

class Person
{

    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

    public:
        //Some methods

        Person(std::string firstname, std::string lastname, int arbitrary);

        ~Person();

        // A function that gets a NAME will not change any attribute, so we put const on it.
        std::string GetName() const;

        // On the .cpp file we need to implement like this:
        /*
            string Person::GetName() const
            {
                return firstname + " " + lastname;
            }
        */

        int GetNumber() const {return arbitrarynumber;}

        void SetNumber(int number) {arbitrarynumber = number;}

};