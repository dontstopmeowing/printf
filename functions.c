#include "holberton.h"
/**
 * print_c - imprimir un caracter
 * @v: valor a imprimir
 * Return: valor impreso
 */
int print_c(va_list v)
{
	char a = (char)va_arg(v, int);

	write(1, &a, 1);
	return (1);
}

/**
 * print_s - print string
 * @v: Value to be printed
 * Return: void
 */
int print_s(va_list v)
{
	int i = 0;
	char *a = va_arg(v, char *);

	if (a != NULL)
	{
		while (a[i])
		{
			write(1, &a[i], 1);
			i++;
		}
	}
	else
	{
		write(1, "(null)", 6);
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
	int a = 37;

	write(1, &a, 1);
	return (1);
}
