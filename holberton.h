#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

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
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list);
int print_c(va_list v);
int print_s(va_list v);
int print_per(__attribute__((unused)) va_list v);
int print_i(va_list v);

#endif /* _HOLBERTON_H */
