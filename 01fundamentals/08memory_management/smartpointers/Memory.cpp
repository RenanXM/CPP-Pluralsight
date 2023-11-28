#include "Person.h"
#include <string>
using std::string;

int Dummy(Person p) {return p.GetNumber();}

int main()
{
    /* NICE 1
    {
        Person Kate("Kate", "Gregory", 345);
        Kate.AddResource();
        string s1 = Kate.GetResourceName();
        //There is no problem calling again :)
        //My old shared pointer was cleaned up
        Kate.AddResource();
    }

    // and after this scope, the pointer disappear.
    // Everything is smart and good.
    */

   // NICE 2

   {
        Person Kate("Kate", "Gregory", 345);
        Kate.AddResource();
        string s1 = Kate.GetResourceName();
        // Do it again: ok as before.
        Kate.AddResource();

        // Now both Kate2 and Kate have shared pointers that 
        // are pointing to the same resource.
        Person Kate2 = Kate;

        // Thats no impact, one go away and one is added.
        Kate = Kate2;

        // int Dummy(Person p);
        // When we pass Kate2 to the function, another pointer is created
        // to the scope of the function. A pointer that, again, is pointing
        // to the same resource. Now there are 3 strong refs.
        // When function ends, 2 strong refs.
        int j = Dummy(Kate2);

   }



    return 0;
}
