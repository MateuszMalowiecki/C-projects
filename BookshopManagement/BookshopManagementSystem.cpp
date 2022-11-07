#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

BookShopManagementSystem::BookShopManagementSystem(BookStore store)
{
    this.bookStore = store;
}

void BookShopManagementSystem::addBooksToOrder(Book book, int amount) 
{
    bookName = book.getName();
    it = bookStore.find(book);
    if (it == bookStore.end()) 
    {
        std::cout << "Error: Book " << bookName << " not available in the store" << std::endl;
        return;
    }

    book_amount = *it;
    if (book_amount >= amount) 
    {
        bookStore[book] = book_amount - amount;
        if (order.find(book) == order.end()) 
        {
            order[book] = 0;
        }
        order[book] += amount;
        std::cout << "Succesfully placed book " << bookName << " in order" << std::endl;
        return;
    }

    std::cout << "Error: Book" << bookName << "not available in the store." << std::endl;
}

void BookShopManagementSystem::deleteBooksFromOrder(Book book)
{
    bookName = book.getName();
    it = order.find(book);
    if (it == order.end()) 
    {
        std::cout << "Error: Book " << bookName << " was not placed in your order" << std::endl;
        return;
    }
    book_amount = *it
    if(book_amount > 0) 
    {
        order[book] = 0;
        bookStore[book] = amount;
        std::cout << "Succesfully removed book from order" << std::endl;
        return;
    }
    std::cout << "Error: Book " << bookName << " was not placed in your order" << std::endl;
}

void BookShopManagementSystem::showActualOrder() 
{
    std::cout << "Your books: " << std::endl;
    for(it = order.begin(); it != order.end(); it++) 
    {
        std::cout << "Book: " << it->first << ", amount: " << it->second << std::endl;
    }
}
