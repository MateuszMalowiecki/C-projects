#include <iostream>

class Book 
{
public:
    Book(int price, std::string name, std::string author);
    std::ostream& operator<<(std::ostream& stream, Book book);
protected:
private:
    int price;
    std::string name;
    std::string author;
}