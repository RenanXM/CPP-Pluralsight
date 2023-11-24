#include <string>

// An template max function already exists.

using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"
#include "BankAccount.h"

// Template function
template <class T>
T maxy(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}

int main()
{
    
    cout << "max of 33 and 44 is " << maxy(33,44) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "max of " << s1 << " and " << s2 << " is " << maxy(s1,s2) << endl;
    Person p1("Kate", "Gregory", 123);
    Person p2("Someone", "Else", 456);
    cout << "max of " << p1.GetName() << " and " 
    << p2.GetName() << " is " << maxy(p1,p2).GetName()
    << endl;

    BankAccount b1;
    BankAccount b2;

    // I cant use the template function maxy because i didnt overload, for the class
    // BankAccount, the operator "<" like i did in class Person. So, the compiler 
    // understands what to do in that case. But not in the BankAccount.
    cout << "max of " << b1.GetHolderName() << " and " << b2.GetHolderName() << " is "
    << maxy(b1,b2).GetHolderName() << endl;

    return 0;
}