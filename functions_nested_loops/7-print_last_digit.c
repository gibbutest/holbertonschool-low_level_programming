#include "main.h"

/**
 * print_last_digit - The printing of the last digit.
 * @n: The number
 *
 * Return: beans
 */
int print_last_digit(int n)
{
	int last = ((n < 0 ? -n : n) % 10);

	_putchar(last + '0');

	return (last);
}
