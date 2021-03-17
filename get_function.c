#include "holberton.h"
/**
 * get_function - obtener funcion
 * @ptr: puntero que obtiene diferentes especificadores
 *
 * Return: ptr
 */
int (*get_function(const char *ptr))(va_list)
{
	size_t i = 0;

	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{NULL, NULL}};

	while (ops[i].type != NULL)
	{
		if (*(ops[i].type) == *ptr)
		{
			return (ops[i].function);
		}
		i++;
	}

	return (NULL);
}
