#include "Account.hpp"
#include "BankManagementSystem.hpp"
#include <iostream>

int main() 
{
    Account account1 = Account(3000, "Kowalski");
    Account account2 = Account(4000, "Nowak");
    BankManagementSystem system =  BankManagementSystem();
    system.createAccount(account1);
    system.createAccount(account2);
    system.showAccountDetails("Kowalski");
    system.showAccountDetails("Kaminski");
    system.depositMoney(2000, "Nowak");
    system.showAccountDetails("Nowak");
    system.depositMoney(1000, "Wojcik");
    system.withdrawMoney(3000, "Kowalski");
    system.showAccountDetails("Kowalski");
    system.withdrawMoney(5000, "Lewandowski");
    system.withdrawMoney(1000, "Kowalski");
    return 0;
}
