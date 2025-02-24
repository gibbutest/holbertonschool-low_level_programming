#include "main.h"

/**
 * print_line - Print the line!
 *
 * Description: Prints a line?
 * @n: The number of lines.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
