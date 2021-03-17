#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i - imprimir entero a decimal
 * @v: lista de argumentos
 * Return: i - len
 */
int print_i(va_list v)
{
	int arguments, tmp, i = 0, j, num;

	arguments = va_arg(v, int);

	if (arguments < 0)
	{
		tmp = -arguments;
		write(1, "-", 1);
		i++;
	}
	else
		tmp = arguments;
	for (j = 1; j <= _numlen(tmp); j++)
	{
		num = ((tmp / (_pow(10, _numlen(tmp) - j))) % 10) + 48;
		write(1, &num, 1);
		i++;
	}
	return (i);
}
/**
 * _numlen - function that gets the lenght of a string of numbers
 * @n: numbers
 * Return: counter
 */
int _numlen(int n)
{
	int i = 1;
	int control = 10;

	if (n < 0)
	{
		n = -n;
	}
	while (control <= n)
	{
		i++;
		control = control * 10;
	}
	return (i);
}
/**
 * _pow - function that returns the value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: raised y
 */
int _pow(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow(x, y - 1));
}
