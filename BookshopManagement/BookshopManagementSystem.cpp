#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

BookShopManagementSystem::BookShopManagementSystem(const BookStore& store)
{
    this->bookStore = store;
}

void BookShopManagementSystem::addBooksToOrder(const Book& book, const int& amount) 
{
    auto bookName = book.getName();
    std::cout << "Trying to add book " << bookName << " to the order" << std::endl;
    auto it = bookStore.find(book);
    if (it == bookStore.end()) 
    {
        std::cerr << "Error: Book " << bookName << " not available in the store" << std::endl;
        return;
    }

    auto bookAmount = it->second;
    if (bookAmount >= amount)
    {
        bookStore[book] = bookAmount - amount;
        if (order.find(book) == order.end()) 
        {
            order[book] = 0;
        }
        order[book] += amount;
        std::cout << "Succesfully placed book " << bookName << " in the order" << std::endl;
        return;
    }
    auto isPlural = bookAmount == 1 ? " copy " : " copies ";
    std::cerr << "Error: Only " << bookAmount << isPlural << " of the book available in the store." << std::endl;
}

void BookShopManagementSystem::deleteBooksFromOrder(const Book& book)
{
    auto bookName = book.getName();
    std::cout << "Trying to remove book " << bookName << " from the order" << std::endl;
    auto it = order.find(book);
    if (it == order.end()) 
    {
        std::cerr << "Error: Book " << bookName << " was not placed in your order" << std::endl;
        return;
    }
    auto book_amount = it->second;
    if(book_amount > 0) 
    {
        order.erase(book);
        bookStore[book] = book_amount;
        std::cout << "Succesfully removed book " << bookName << " from the order" << std::endl;
        return;
    }
    std::cerr << "Error: Book " << bookName << " was not placed in your order" << std::endl;
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
