#pragma once
#include <string>

class BankAccount
{
    public: 
        BankAccount();
        ~BankAccount();

    private:
        int BalanceInPennies;

    public:
        std::string GetHolderName() {return  "NotImplemented";}

};