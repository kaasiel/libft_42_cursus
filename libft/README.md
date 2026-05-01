*This project has been created as part of the 42 curriculum by belaindr.*

# Project Name

libft

# Libft - Your First C Library

## 1. Description

**Libft** (Library of Functions) is a foundational project of the 42 curriculum. As C programmers, we do not have access to the convenience of standard libraries in our school projects. The goal of this project is to re-implement a set of standard C library functions (libc) from scratch, along with additional utility functions that will be useful for future assignments.

This project is not just about rewriting code; it is about understanding how memory works, how strings are manipulated at a low level, and how to structure a reusable static library.

**Key Goals:**
* Deepen understanding of C standard functions.
* Master pointer arithmetic and memory allocation (`malloc`, `free`).
* Learn to create and manage a static library (`.a` file).
* Implement a Linked List data structure.

---

## 2. Features

The library is organized into three distinct sections based on the project subject:

### Part 1 - Libc Re-implementation
These functions mimic the behavior of the standard C library.
* **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_strdup`
* **String:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* **Type Checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **Conversion:** `ft_atoi`, `ft_toupper`, `ft_tolower`

### Part 2 - Additional Functions
Custom utility functions often missing from libc but useful for string manipulation.
* `ft_substr`: Creates a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new one.
* `ft_strtrim`: Trims characters from the start and end of a string.
* `ft_split`: Splits a string into an array of strings based on a delimiter.
* `ft_itoa`: Converts an integer to an ASCII string.
* `ft_strmapi`: Applies a function to every character of a string to create a new string.
* `ft_striteri`: Applies a function to every character of a string by reference.
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output functions handling file descriptors.

### Bonus - Linked List Manipulation
Functions to manage generic singly linked lists.
* `ft_lstnew`: Creates a new node.
* `ft_lstadd_front`: Adds a node to the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in a list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds a node to the end of the list.
* `ft_lstdelone`: Deletes a single node.
* `ft_lstclear`: Deletes and frees a list.
* `ft_lstiter`: Iterates through a list.
* `ft_lstmap`: Creates a new list by applying a function to existing nodes.

### 3. Instructions
**Prerequisites:**
Ensure you have a C compiler (cc or clang) and make installed on your system. This library is designed to be compiled in a Unix-like environment (Linux/macOS).
Compilation:
The project uses a Makefile with the standard rules. To compile the library, run the following commands in your terminal:
**Command:**
* make : Compiles the source files and generates libft.a.
* make clean : Removes all object files (.o).
* make fclean : Removes object files and the compiled libft.a library.
* make re : Performs a full fclean and make.
**Installation & Usage**
To use this library in your projects, follow these steps:
* Include the header in your source code: `#include "libft.h"`
* Link the library during compilation. Assuming libft.a is in your project's root: `cc -Wall -Wextra -Werror main.c -L. -lft -o my_program`

## 4. Resources
- Linux man pages
- 42 subject and documentation
- PrimeFX(BORIS) "youtube channel"

## 5. AI Usage

AI tools (CLAUDE) were used as a learning aid only, not to generate final code
No code was directly generated or copied from AI; all implementations were written manually.
Specifically, AI was used for:

* Clarifying the behavior of certain standard C functions (e.g. memcpy, strlcpy, calloc)

* Explaining concepts such as memory allocation, pointer arithmetic, and edge cases

* Reviewing logic at a high level and suggesting possible improvements or test cases

**AI was not used to:**
* debug and verify eventual errors in the code
`All code was written, tested, and debugged manually by me, in accordance with the project rules.`

