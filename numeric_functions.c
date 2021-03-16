#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * convert - function that converts
 * numbers to printable numbers in ascii code
 * @n: numbers to be converted
 * Return: written value
 */
int convert(int n)
{
	int a;

	if (n / 10 != 0)
	{
		convert(n / 10);
	}

	a = ((n % 10) + 48);

	return (write(1, &a, 1));
}

/**
 * print_i - function that prints integers
 * @v: arguments
 * Return: counter of arguments passed through
 */
int print_i(va_list v)
{
	int arguments, tmp, i = 0, j = 0;

	arguments = va_arg(v, int);
	tmp = arguments;
	// If va_arg is smaller than 0, put a - sign
	// and change number to positive
	if (arguments < 0)
	{
		write(1, "-", 1);
		i++;
		arguments = -arguments;
	}
	for (; tmp != 0; j++)
	{
		tmp = tmp / 10;
		i++;
	}

	convert(arguments);

	return (i);
}
