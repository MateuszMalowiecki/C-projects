#include "Book.hpp"
#include <map>

using BookStore = std::map<Book, int>;
using Order = std::map<Book, int>;

class BookShopManagementSystem 
{
public:
    BookShopManagementSystem(BookStore);
    void addBooksToOrder(Book, int);
    void showActualOrder();
    void deleteBooksFromOrder(Book);

private:
    BookStore bookStore;
    Order order;
};
