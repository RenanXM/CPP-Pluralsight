#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

    int x;
    cout << "Enter a number" << endl;
    cin >> x;

    bool prime = true;
    int i = 2;

    // variable i belongs to the scope of the for loop.
    // Cant be used outside. If i want to, just declare it
    // before.
    for (int i = 2; i <= x/i; i++)
    {
        int factor = x/i;
        if (factor * i == x)
        {
            cout << "factor found: " << i << " * " << factor << endl;
            prime = false;
            break;
        }
    }

    cout << x << " is ";
    if (prime) cout << "prime" << endl;
    else cout << "not prime" << endl;

    return 0;
}