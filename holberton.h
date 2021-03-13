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

#endif /* _HOLBERTON_H */
