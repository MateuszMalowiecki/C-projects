#include <iostream>

#pragma once
class Book 
{
public:
    Book(int, std::string, std::string);
    friend std::ostream& operator<<(std::ostream&, const Book&);
    bool operator==(const Book&);
    bool operator<(const Book&) const;
    int getPrice() const;
    std::string getName() const;
    std::string getAuthor() const;
private:
    int price;
    std::string name;
    std::string author;
};