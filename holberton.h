#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @type: Data type
 * @function: The function associated
 */
typedef struct op
{
	char *type;
	int (*function)(va_list);
} op_t;

/* prototypes to print everything */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list v);

#endif /* _HOLBERTON_H */
