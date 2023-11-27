#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"


int DoubleIt(int& x)
{
    return x * 2;
}

int main()
{

    int i = 3;
    
    int const ci = 3;
    i = 4;
    //ci = 4;

    int& ri = i;
    ri = 5;

    int const& cri = i;
    //cri = 6;

    //int& ncri = ci;

    int j = 10;
    int DoubleJ = DoubleIt(j);
    // DoubleIt recieves an reference. 10 is literal. To fix it
    // you can put int DoubleIt(int const& x)
    // Or you simply recieve the parameter by value. 
    int DoubleTen = DoubleIt(10);

    Person Kate("Kate", "Gregory", 234);
    Kate.SetNumber(235);
    Person const cKate = Kate;
    //cKate.SetNumber(236);

    return 0;
}