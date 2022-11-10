#include <map>
#include "Account.hpp"
#include <boost/optional.hpp>

using AccountsMap = std::map<std::string, Account>;
class BankManagementSystem 
{
public:
    BankManagementSystem() = default;
    void createAccount(Account&);
    void showAccountDetails(const std::string&);
    void depositMoney(const int&, const std::string&);
    void withdrawMoney(const int&, const std::string&);
private:
    boost::optional<Account> getAccountOfOwner(const std::string&);
    AccountsMap accounts;
};
