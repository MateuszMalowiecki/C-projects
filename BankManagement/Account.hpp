
#pragma once
class Account {
public:
    Account(int amount, string name);
    int getAmount();
    void setAmount(int newAmount);
    std::string getOwnerName();
private:
    int amount;
    std::string ownerName;
}
