#include <iostream>

int main()
{
    int i1 = 1;
    std::cout << "i1= " << i1 << std::endl;
    int i2;
    i2 = 2;
    std::cout << "i2= " << i2 << std::endl;
    int i3(3);
    std::cout << "i3= " << i3 << std::endl;
    int i4{4};
    std::cout << "i4= " << i4 << std::endl;


    double d1 = 2.2;
    double d2 = i1;
    // loss of data
    // int i5 = d1;
    // Casting
    int i5 = static_cast<int>(d1);
    std::cout << "d1= " << d1 << std::endl;
    std::cout << "d2= " << d2 << std::endl;
    std::cout << "i5= " << i5 << std::endl;


    char c1 = 'a';
    //char c2 = "b"; collection of characters!! ("")
    std::cout << c1 << std::endl;
    //std::cout << c2 << std::endl;


    bool flag = false;
    std::cout << "flag= " << flag << std::endl;
    flag = i1;
    std::cout << "flag= " << flag << std::endl;
    flag = d1;
    std::cout << "flag= " << flag << std::endl;


    auto a1 = 1; //int
    auto a2 = 2.2; // double
    auto a3 = 'c'; // char
    auto a4 = "s"; // string (collection of characters)
    auto a5 = true; // boolean
    auto a6 = 3L; //long 
    auto a7 = 1'000'000'000'000; // long long
    auto a8 = 0xFF; //255 hexadecimal
    auto a9 = 0b111; //7 binary

    // loss of data
    // a1 = a2;
    // Casting
    a1 = static_cast<int>(a2);

    unsigned char n1 = 128;
    char n2 = 128; // char cant hold 128. Just to 127
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;
    n1 = 254;
    n2 = 254; // char cant hold
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;
    n1 = 300;
    n2 = 300; // char cant hold
    std::cout << "n1= " << n1 << std::endl;
    std::cout << "n2= " << n2 << std::endl;

    return 0;
}