# Publication Management System (C++)

## Overview
This is a simple C++ console-based program demonstrating **inheritance** and **method overriding** using a publication system. The program allows the user to enter and display information for either a **Book** or a **Tape**, both derived from a base **Publication** class.

## Features
- Demonstrates **single inheritance** in C++.
- Shows **function overriding** using derived class methods.
- Uses **encapsulation** to store publication attributes.
- User-friendly menu-based input selection.

## Classes Structure
### Publication (Base Class)
- Stores common attribute:
  - `price`
- Methods:
  - `getData()` → Takes price input.
  - `putData()` → Displays price.

### Book (Derived Class)
- Additional Attribute:
  - `pageCount`
- Methods:
  - Overrides `getData()` to take page count and price.
  - Overrides `putData()` to display book details.

### Tape (Derived Class)
- Additional Attribute:
  - `time`
- Methods:
  - Overrides `getData()` to take time duration and price.
  - Overrides `putData()` to display tape details.

## How to Run
### Compile
```bash
g++ main.cpp -o publication
Execute
./publication
Usage

Run the program.

Choose:

1 for Book information.

2 for Tape information.

Enter required details when prompted.

View the output.

Example Output
1. Book Info
2. Tape Info
------------
Enter your choice: 1
--------Book Info--------
Enter Number of Pages: 250
Enter price: 500
Number of pages: 250
Price: 500

Concepts Covered
Classes and Objects
Inheritance
Method Overriding
Console Input/Output

Author
Created for learning C++ Object-Oriented Programming concepts.
