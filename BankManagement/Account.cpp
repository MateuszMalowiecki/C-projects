#include "Account.hpp"

Account::Account(int amount, string name) 
{
    this->amount = amount;
    this->name = name;   
}

int Account::getAmount() 
{
    return this->amount;
}

void Account::setAmount(int newAmount)
{
    this->amount = newAmount;
}

std::string Account::getOwnerName() 
{
    return this->ownerName;
}
