#include <map>
#include "Account.hpp"

using AccountsMap = std::map<std::string, Account>
class BankManagementSystem 
{
public:
    BankManagementSystem() = default;
    void createAccount(const Account&);
    void showAccountDetails(const std::string&);
    void depositMoney(const int&, const std::string&);
    void withdrawMoney(const int&, const std::string&);
private:
    Account getAccountOfOwner(const std::string&);
    AccountsMap accounts;
}
