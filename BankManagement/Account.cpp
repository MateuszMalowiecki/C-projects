#include "Account.hpp"
#include <iostream>

Account::Account(const int& amount, const std::string& ownerName) 
{
    this->amount = amount;
    this->ownerName = ownerName;   
}

int Account::getAmount() 
{
    return this->amount;
}

void Account::setAmount(const int& newAmount)
{
    this->amount = newAmount;
}

std::string Account::getOwnerName() 
{
    return this->ownerName;
}
