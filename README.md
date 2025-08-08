
# Library Management System (C++)

A console-based Library Management System written in C++ that allows users to manage books and student records, issue/return books, and perform various search and update operations. The program uses object-oriented principles and includes functionalities to store data, handle different user menus, and manage book availability.

## Features

### Book Management
- Display all book records
- Search by:
  - Book ID
  - Title
  - Author
- Update book details
- Delete books
- Add new books

### Student Management
- Display all student records
- Search students by:
  - ID
  - Name
- Update student details
- Delete student records
- Add new students

### Library Operations
- Issue a book to a student
- Return a book
- Display:
  - All available books
  - All issued (not available) books
  - Students who have issued books
  - Students who haven't issued books
- Calculate total price of all books
- Store data to a file for future use


## Code Structure

- `menu` class contains the main program logic and menu structure
- Uses `account` class (from `account.h`) to manage core book and student data operations
- Modular design for:
  - Library Menu
  - Book Menu
  - Student Menu

---

## Technologies Used

- **Language:** C++
- **IDE:** Any C++ compiler (e.g., Code::Blocks, DevC++, Visual Studio)
- **File Handling:** Basic file operations to store information persistently

---

## How to Run

1. Make sure you have a C++ compiler installed (like `g++`)
2. Compile the program:
   ```bash
   g++ main.cpp -o library

3. Run the executable:

   ```bash
   ./library
   ```

> Note: Make sure all required header files (like `account.h`) are present in the project directory.


## Sample Menu Options

```text
1. Display all information
2. Issue book
3. Available books
4. Not Available books
5. Student information who have not issued books
6. Student information who have issued books
7. Return book
8. Total amount of all Books
9. Store information in file
10. Main Menu
```


## Contributions

This project was created as part of a university assignment to demonstrate OOP, file handling, and menu-driven design using C++.

---

## 📄 License

This project is open-source and available under the MIT License.

