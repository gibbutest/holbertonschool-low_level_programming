#include "main.h"

/**
 * print_last_digit - The printing of the last digit.
 * @n: The number
 *
 * Return: beans
 */
int print_last_digit(int n)
{
	int abs = (n < 0 ? -n : n);
	int last = abs % 10;

	_putchar(last + '0');

	return (last);
}
