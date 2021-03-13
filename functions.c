#include "holberton.h"
#include <stdlib.h>
/**
 * print_char - print char
 * @v: value to be printed
 * Return: int
 */
int print_c(va_list v)
{
	_putchar(va_arg(v, int));
	return (1);
}
