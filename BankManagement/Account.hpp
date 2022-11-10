#include <string>

#pragma once
class Account {
public:
    Account(const int&, const std::string&);
    int getAmount();
    void setAmount(const int&);
    std::string getOwnerName();
private:
    int amount;
    std::string ownerName;
}
