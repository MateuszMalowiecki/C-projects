#include "Account.hpp"
#include "BankManagementSystem.hpp"
#include <iostream>

void BankManagementSystem::createAccount(Account& account) 
{
    std::string accountOwnerName = account.getOwnerName();
    accounts[accountOwnerName] = account;
    std::cout << "Succesfully added account of " << accountOwnerName << std::endl;
}

void BankManagementSystem::showAccountDetails(const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account)
    {
        std::cout << "Amount in the account of " << accountOwnerName << " is: " << account->getAmount() << std::endl;
    }
}

void BankManagementSystem::depositMoney(const int& amount, const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account) 
    {
        auto actualAmount = account->getAmount();
        accounts[accountOwnerName].setAmount(actualAmount + amount);
        std::cout << "Successfully deposited amount " << amount << " into the account of " << accountOwnerName << std::endl;
    }
}

void BankManagementSystem::withdrawMoney(const int& amount, const std::string& accountOwnerName) 
{
    auto account = this->getAccountOfOwner(accountOwnerName);
    if(account) 
    {
        auto actualAmount = account->getAmount();
        if (actualAmount < amount) 
        {
            std::cerr << "Error: You cannot withdraw " << amount << ", because you have only " << actualAmount << " on the account" << std::endl;
            return;
        }
        accounts[accountOwnerName].setAmount(actualAmount - amount);
        std::cout << "Successfully withdrawed amount " << amount << " from the account of " << accountOwnerName << std::endl;
    }
}

boost::optional<Account> BankManagementSystem::getAccountOfOwner(const std::string& accountOwnerName) 
{
    auto it = accounts.find(accountOwnerName);
    if (it == accounts.end()) 
    {
        std::cerr << "Error: Account of " << accountOwnerName << " not found" << std::endl;
        return boost::none;
    }
    return it->second;
}
