#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Print all but.. not all?
 * @format: The string to format.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char *string = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (
			format[i] == 's' || format[i] == 'i' ||
			format[i] == 'c' || format[i] == 'f')
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s", string);
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
			}
			separator = ", ";
		}
		i++;
	}

	printf("\n");
}
