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

/**
 * print_s - print string
 * @v: Value to be printed
 * Return: void
 */
int print_s(va_list v)
{
	size_t i;
	char *str = va_arg(v, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; i < str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

/**
 * print_per - print percentage
 * @v: Value to be printed
 * Return: expected a variable to be unused
 */
int print_per(__attribute__((unused)) va_list v)
{
	_putchar(37);
	return (1);
}
