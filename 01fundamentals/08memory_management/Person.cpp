#include "Person.h"
#include <iostream>

using std::cout;
using std:: endl;

//using namespace std is not a good idea

// Constructor
Person::Person(std::string first, std::string last, int arbitrary)
: firstname(first), 
  lastname(last), 
  arbitrarynumber(arbitrary),
  pResource(nullptr)
{
    cout << "constructing " << GetName() << endl;

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
    // WE DELETE THE POINTER ATTRIBUTE FROM THE PERSON IN THE DESTRUCTOR
    delete pResource;
}


void Person::AddResource()
{   
    // Solution1:
    // DELETAMOS ANTES DE CRIAR PARA O CASO DA PESSOA CHAMAR DUAS VEZES,
    // TROCAR O pResource de antigo para novo, e nunca mais conseguiremos
    // limpar o antigo.
    delete pResource;
    pResource = new Resource("Resources for " + GetName());
}


// Solution2:
Person::Person(Person const & p)
{
    pResource = new Resource(p.pResource->GetName());
}

Person& Person::operator=(const Person& p)
{
    delete pResource;
    pResource = new Resource(p.pResource->GetName());
    return *this;
}







std::string Person::GetName() const
{   
    return firstname + " " + lastname;
}

// IMPLEMENTING OVERLOADED OPERATORS FUNCTIONS FROM THE .h

// Compares two Persons
bool Person::operator<(Person const& p) const
{
    return arbitrarynumber < p.arbitrarynumber;
}

// Compares with integers
bool Person::operator<(int i ) const
{
    return arbitrarynumber < i;
}

// Compares with integers
bool operator<(int i, Person const& p)
{
    return i < p.GetNumber();
}