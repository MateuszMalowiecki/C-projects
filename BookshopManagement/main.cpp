#include "Book.hpp"
#include "BookShopManagementSystem.hpp"
#include <iostream>

int main() 
{
    Book book1 = Book(5, "Lalka", "Prus");
    Book book2 = Book(4, "Quo Vadis", "Sienkiewicz");
    Book book3 = Book(2, "Pan Tadeusz", "Mickiewicz");
    const BookStore store = {{book1, 6}, {book2, 5}};
    BookShopManagementSystem system =  BookShopManagementSystem(store);
    system.addBooksToOrder(book1, 4);
    system.addBooksToOrder(book2, 3);
    system.showActualOrder();
    std::cout << "Order price: " << system.getOrderPrice() << std::endl;
    system.addBooksToOrder(book3, 1);
    system.showActualOrder();
    system.addBooksToOrder(book1, 3);
    system.showActualOrder();
    std::cout << "Order price: " << system.getOrderPrice() << std::endl;
    system.deleteBooksFromOrder(book1);
    system.showActualOrder();
    std::cout << "Order price: " << system.getOrderPrice() << std::endl;
    system.deleteBooksFromOrder(book3);
    system.showActualOrder();
    system.deleteBooksFromOrder(book1);
    system.showActualOrder();
    std::cout << "Order price: " << system.getOrderPrice() << std::endl;
    return 0;
}
