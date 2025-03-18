#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print the strings Kronk!
 * @separator: The character(s) between each string
 * @n: The number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (!str)
			str = "(nil)";
		if (!separator || i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}

	printf("\n");
}
