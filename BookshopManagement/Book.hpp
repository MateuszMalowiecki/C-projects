#include <iostream>

#pragma once
class Book 
{
public:
    Book(int, std::string, std::string);
    std::ostream& operator<<(std::ostream& stream);
    bool operator==(const Book&);
    bool operator<(const Book&) const;
    int getPrice();
    std::string getName();
    std::string getAuthor();
private:
    int price;
    std::string name;
    std::string author;
};
