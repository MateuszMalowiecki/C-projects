#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

BookShopManagementSystem::BookShopManagementSystem(BookStore store)
{
    this->bookStore = store;
}

void BookShopManagementSystem::addBooksToOrder(Book book, int amount) 
{
    auto bookName = book.getName();
    std::cout << "Trying to add book " << bookName << " to the order" << std::endl;
    auto it = bookStore.find(book);
    if (it == bookStore.end()) 
    {
        std::cout << "Error: Book " << bookName << " not available in the store" << std::endl;
        return;
    }

    auto book_amount = it->second;
    if (book_amount >= amount) 
    {
        bookStore[book] = book_amount - amount;
        if (order.find(book) == order.end()) 
        {
            order[book] = 0;
        }
        order[book] += amount;
        std::cout << "Succesfully placed book " << bookName << " in the order" << std::endl;
        return;
    }

    std::cout << "Error: Book " << bookName << " not available in the store." << std::endl;
}

void BookShopManagementSystem::deleteBooksFromOrder(Book book)
{
    auto bookName = book.getName();
    std::cout << "Trying to remove book " << bookName << " from the order" << std::endl;
    auto it = order.find(book);
    if (it == order.end()) 
    {
        std::cout << "Error: Book " << bookName << " was not placed in your order" << std::endl;
        return;
    }
    auto book_amount = it->second;
    if(book_amount > 0) 
    {
        order[book] = 0;
        bookStore[book] = book_amount;
        std::cout << "Succesfully removed book " << bookName << " from the order" << std::endl;
        return;
    }
    std::cout << "Error: Book " << bookName << " was not placed in your order" << std::endl;
}

void BookShopManagementSystem::showActualOrder() 
{
    std::cout << "Your books: " << std::endl;
    for(auto it = order.begin(); it != order.end(); it++) 
    {
        if (it->second > 0) 
        {
            std::cout << it->first << ", amount: " << it->second << std::endl;
        }
    }
}

int BookShopManagementSystem::getOrderPrice() 
{
    int totalPrice = 0;
    for(auto it = order.begin(); it != order.end(); it++) 
    {
        auto book = it->first;
        auto bookPrice = book.getPrice();
        auto bookAmount = it->second;
        totalPrice += bookPrice * bookAmount;
    }
    return totalPrice;
}