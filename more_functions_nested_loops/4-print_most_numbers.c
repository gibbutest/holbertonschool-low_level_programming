#include "main.h"

/**
 * print_most_numbers - Most of the numbers?
 * Description: Do we still need this for void returns?
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);

	_putchar('\n');
}
