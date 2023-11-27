#include "Person.h"

// THIS IS BAD!! BY HAND IS BAD
int main()
{   
    // OK 
    Person Kate("Kate", "Gregory", 345);
    Kate.AddResource();

    // Problem 1
    Kate.SetFirstName("Kate2");
    // what about the old pResource created before?
    // solution1 on person.cpp -> AddResource()
    Kate.AddResource();


    // Problem 2
    // this kate2, because i didnt write a copy constructor for it,
    // just took a copy of pResource pointer, and when Kate2 is out of
    // scope, it trys to call delete on the resource pointer. THAT
    // ALREDY HAD DELETE CALLED ON IT. Thats why we have the rule of 3
    // solution2: IF YOU WRITE A DESTRUCTOR, THEN YOU NEED TO WRITE THE COPY 
    // CONSTRUCTOR AND THE COPY ASSIGNMENT OPERATOR!!!
    // person.cpp ->
    Person Kate2 = Kate;



    return 0;
}