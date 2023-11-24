#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

        // "There is a function outhere called less than that takes an integer
        //  and a Person by const reference, and that function is a friend.
        // She is allowed to see this private attributes!!!"
        friend bool operator<(int i, Person const& p);

    public:
        Person(std::string firstname, std::string lastname, int arbitrary);
        ~Person();
        std::string GetName() const;
        int GetNumber() const { return arbitrarynumber; }
        void SetNumber(int number) { arbitrarynumber = number; }
        
        // OVERLOAD FOR OPERATORS IN C++
        bool operator<(Person const& p) const;
        bool operator<(int i) const;
};

bool operator<(int i, Person const& p);