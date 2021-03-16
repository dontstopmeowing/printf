#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - print function
 * @format: format
 *
 * Return: written string and num of chars
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		size_t i = 0, numberOfChars = 0;
		va_list mylist;
		int (*list)(va_list);

		va_start(mylist, format);

		while (format[i])
		{
			while (format[i] != '%' && format[i])
			{
				write(1, &format[i], 1);
				i++;
				numberOfChars++;
			}
			list = get_function(&format[i + 1]);
			if (list != NULL)
			{
				i = i + 2;
				numberOfChars = numberOfChars + list(mylist);
				continue;
			}
			if (format[i] == 0)
				return (numberOfChars);
			else if (format[i + 1] == 0)
				return (-1);
			write(1, &format[i], 1);
			numberOfChars++;
			if (format[i + 1] == '%')
				i = i + 2;
			else
				i++;
		}
		va_end(mylist);
		return (numberOfChars);
	}
	else
		return (-1);
}
