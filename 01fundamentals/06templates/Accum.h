#pragma once


template <class T>
class Accum
{
    private:
        T total;
    public:
        // Constructor
        Accum(T start): total(start) {};

        T operator+=(T const& t) {return total = total + t;};

        T GetTotal() const {return total;};
};  


// Template specialization: Accum for Person..
// In my context, i want to accumulate the people's arbitrary number.
template <>
class Accum<Person>
{
    private:
        int total;
    public:
        // Constructor
        Accum(int start): total(start) {};

        int operator+=(Person const& t) {return total = total + t.GetNumber();};

        int GetTotal() const {return total;};
};       