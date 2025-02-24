#include "main.h"

/**
 * print_diagonal - What's the weather like?
 *
 * Description: It's raining sideways!
 * @n: But how much rain?
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');

		b = n - a;
	}

	if (n <= 0)
		_putchar('\n');
}
