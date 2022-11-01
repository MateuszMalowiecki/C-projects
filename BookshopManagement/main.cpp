#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

int main() 
{
    Book book1 = new Book(0, "AAA", "BBB");
    Book book2 = new Book(1, "CCC", "DDD");
    BookShopManagementSystem system = new BookShopManagementSystem({});
    system.addBooksToOrder({book1, book2});
    system.showActualOrder();
    system.deleteBooksFromOrder({book1});
    system.showActualOrder();
    return 0;
}