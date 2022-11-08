#include "Book.hpp"

Book::Book(int price, std::string name, std::string author) 
{
    this->price=price;
    this->name=name;
    this->author=author;
}

std::ostream& operator<<(std::ostream& stream, const Book& book) 
{
    stream << "Name: " << book.name << ", author: " << book.author << ", price: " << book.price;
    return stream;
}

bool Book::operator==(const Book& otherBook) 
{
    return this->getName() == otherBook.getName() && this->getAuthor() == otherBook.getAuthor();
}

bool Book::operator<(const Book& otherBook) const
{
    return this->getPrice() < otherBook.getPrice();
}
int Book::getPrice() const
{
    return this->price;
}

std::string Book::getName() const
{
    return this->name;
}

std::string Book::getAuthor() const
{
    return this->author;
}
