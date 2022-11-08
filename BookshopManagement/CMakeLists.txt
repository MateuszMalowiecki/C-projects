cmake_minimum_required(VERSION 3.13)  # CMake version check
project(BookShopManagement)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES /mnt/c/Users/cp24/Documents/GitHub/C-projects/BookshopManagement/Book.cpp /mnt/c/Users/cp24/Documents/GitHub/C-projects/BookshopManagement/BookshopManagementSystem.cpp /mnt/c/Users/cp24/Documents/GitHub/C-projects/BookshopManagement/main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(bookshop_management ${SOURCE_FILES})
