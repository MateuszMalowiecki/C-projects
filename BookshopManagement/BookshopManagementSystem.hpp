#include "Book.hpp"
#include <list>
#include <vector>

using BookStore = std::vector<Book>;
using Order = std::list<Book>;

class BookShopManagementSystem 
{
public:
    BookShopManagementSystem(BookStore);
    void addBooksToOrder(Order);
    void showActualOrder();
    void deleteBooksFromOrder(Order);

private:
    void addBookToOrder(Book);
    void deleteBookFromOrder(Book);
    BookStore bookStore;
    Order order;
};
