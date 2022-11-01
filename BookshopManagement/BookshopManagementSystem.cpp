#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

BookShopManagementSystem::BookShopManagementSystem(BookStore store)
{
    this.bookStore = store;
}

void BookShopManagementSystem::addBooksToOrder(Order books)
{
    for(book:books) 
    {
        this.addBookToOrder(book);
    }
}
void BookShopManagementSystem::showActualOrder() 
{
    std::cout << "Your books: " << std::endl
    for(book: this.order) 
    {
        std::cout << book;
    }
}
void BookShopManagementSystem::deleteBooksFromOrder(Order books)
{
    for(book:books)
    {
        this.deleteBookFromOrder(book);
    }
}
void BookShopManagementSystem::addBookToOrder(Book book) 
{
    for (book_in_store : bookStore) 
    {
        if(Book book_in_store.name == book.name) 
        {
            bookStore.erase(book);
            order.emplace(book);
            std::cout << "Succesfully placed book in order";
            return;
        }
    }
    std::cout << "Error: Book not available in the store. Please choose different one";
}
void BookShopManagementSystem::deleteBookFromOrder(Book book)
{
    for (Book book_in_order : order) 
    {
        if(book_in_order.name == book.name) 
        {
            order.erase(book);
            bookStore.emplace(book);
            std::cout << "Succesfully removed book from order";
            return;
        }
    }
    std::cout << "Error: Book not available in the store. Please choose different one";
}