#include "Book.hpp"

Book::book(int price, std::string name, std::string author) 
{
    this.price=price;
    this.name=name;
    this.author=author;
}

std::ostream& Book::operator<<(std::ostream& stream, Book book)
{
    stream << "Price: " << book.price << ", name: " << book.name << ", author: " << book.author;
    return stream
}