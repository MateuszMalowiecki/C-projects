#include "Account.hpp"

Account::Account(const int& amount, const std::string& name) 
{
    this->amount = amount;
    this->name = name;   
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
