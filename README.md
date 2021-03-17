# 0x11. C - printf

### Low-level programming & Algorithms

**Authors:** Carlos Galeano and Alexander Rodriguez

Based on the ["Secrets of printf"](http://www.cypress.com/file/54761/download) scientific paper by Professor Don Colton

#### Requirements

- Authorized functions and macros:

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`

#### Style guides

- Allowed editors: vi, vim, emacs
- All files should end with a new line
- The code should use the [Betty style](https://github.com/holbertonschool/Betty)
- Global variables are not allowed
- No more than 5 functions per file

#### Headers

- The prototypes of all functions should be included in header file called holberton.h
- All header files should be include guarded

#### Compilation

- All files will be compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using the flags `-Wall -Werror -Wextra and -pedantic`
- code will be compiled this way: `gcc -Wall -Werror -Wextra -pedantic *.c`