#include "main.h"

/**
 * print_last_digit - The printing of the last digit.
 * @n: The number
 *
 * Return: beans
 */
int print_last_digit(int n)
{
	int last = n % 10;
	int digit = (last < 0 ? -last : last);

	_putchar(digit + '0');

	return (digit);
}
