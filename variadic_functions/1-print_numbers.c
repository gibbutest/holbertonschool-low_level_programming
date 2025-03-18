#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print the numbers Kronk!
 * @separator: The character(s) between each number
 * @n: The number of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		if (!separator || i == n - 1)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);

	printf("\n");
}
