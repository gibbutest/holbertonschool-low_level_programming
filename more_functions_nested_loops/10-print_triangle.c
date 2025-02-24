#include "main.h"

/**
 * print_triangle - Illuminati?
 *
 * Description: Not quite right.
 * @size: How big is the illuminati?
 */
void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
