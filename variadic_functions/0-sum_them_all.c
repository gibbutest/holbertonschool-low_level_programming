#include <stdarg.h>

/**
 * sum_them_all - Sums all the args passed.
 * @n: Number of args
 *
 * Return: The sum all of the args.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
