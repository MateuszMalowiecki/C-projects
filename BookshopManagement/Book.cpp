#include "Book.hpp"

Book::book(int price, std::string name, std::string author) 
{
    this.price=price;
    this.name=name;
    this.author=author;
}

std::ostream& Book::operator<<(std::ostream& stream)
{
    stream << "Name: " << this.name << ", author: " << this.author << ", price: " << this.price;
    return stream
}

bool Book::operator==(Book otherBook) 
{
    return this.getName() == otherBook.getName() && this.getAuthor() == otherBook.getAuthor();
}

bool Book::operator<(Book otherBook) const
{
    return this.getPrice() < otherBook.getPrice()
}
int Book::getPrice() 
{
    return this.price;
}

std::string Book::getName()
{
    return this.name;
}

std::string Book::getAuthor()
{
    return this.author;
}