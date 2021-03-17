# 0x11. C - _printf

We are supposed to write our printf function that can at least handle the following parameters

- `%c (as to print a character)`
- `%s (as to print a string)`
- `% (as to print a cent sign)`

### Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation.
- Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h

### Mandatory tasks assigned

- [x] Write a function that produces output according to a format.

Prototype: **int _printf(const char *format, ...);**
Returns: the number of characters printed (excluding the **null** byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
**c s %**

- [x] Handle the following conversion specifiers: **d s**

- [x] Create a man page for your function.

**Authors:** Carlos Galeano and Alexander Rodriguez.
