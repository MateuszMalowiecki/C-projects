#include "Account.hpp"
#include "BankManagementSystem.hpp"
#include <iostream>

void BankManagementSystem::createAccount(Account account) 
{
    std::string accountName = account.getName();
    accounts[accountName] = account;
}

void BankManagementSystem::showAccountDetails(const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account) 
    {
        std::cout << "Amount in the account of " << accountOwnerName << " is: " << account->getAmount();
    }
}

void BankManagementSystem::depositMoney(const int& amount, const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account) 
    {
        auto actualAmount = account->getAmount();
        account->setAmount(actualAmount + amount);
        std::cout << "Successfully deposited amount " << amount << " into the account of " << accountOwnerName;
    }
}

void BankManagementSystem::withdrawMoney(const int& amount, const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account) 
    {
        auto actualAmount = account->getAmount();
        account->setAmount(actualAmount - amount);
        std::cout << "Successfully withdrawed amount " << amount << " from the account of " << accountOwnerName;
    }
}

boost::optional<Account> BankManagementSystem::getAccountOfOwner(const std::string& accountOwnerName) 
{
    auto it = accounts.find(accountName);
    if (it == accounts.end()) 
    {
        std::cerr << "Account of" << " not found"
        return boost::none;
    }
    return *it;
}
