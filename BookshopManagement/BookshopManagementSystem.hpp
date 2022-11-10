#include "Book.hpp"
#include <map>

using BookStore = std::map<Book, int>;
using Order = std::map<Book, int>;

class BookShopManagementSystem 
{
public:
    BookShopManagementSystem(const BookStore&);
    void addBooksToOrder(const Book&, const int&);
    void showActualOrder();
    void deleteBooksFromOrder(const Book&);
    int getOrderPrice();

private:
    BookStore bookStore;
    Order order;
};
