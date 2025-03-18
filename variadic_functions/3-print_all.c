#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _strlen - Because we can't just use the standard one...
 * @name: The string to get the length of
 *
 * Return: lenght of string
 */
int _strlen(const char *name)
{
	int i = 0;

	while (name[i])
		i++;

	return (i);
}

/**
 * print_all - Print all but.. not all?
 * @format: The string to format.
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	int b = 0;
	va_list args;
	int formatLength = _strlen(format);
	struct print_types types[] = {
		{'i', "%d"},
		{'s', "%s"},
		{'c', "%c"},
		{'f', "%f"}
	};

	va_start(args, format);

	while (format[a])
	{
		b = 0;

		while (b < 3)
		{
			if (format[a] == types[b].letter)
			{
				printf(types[b].flag, va_arg(args, char *));
				if (a < formatLength - 1)
					printf(", ");
			}
			b++;
		}
		a++;
	}

	printf("\n");
}
