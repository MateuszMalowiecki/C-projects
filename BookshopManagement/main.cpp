#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

int main() 
{
    Book book1 = Book(0, "AAA", "BBB");
    Book book2 = Book(1, "CCC", "DDD");
    const BookStore store = {{book1, 6}, {book2, 5}};
    BookShopManagementSystem system =  BookShopManagementSystem(store);
    system.addBooksToOrder(book1, 4);
    system.addBooksToOrder(book2, 3);
    system.showActualOrder();
    system.deleteBooksFromOrder(book1);
    system.showActualOrder();
    return 0;
}