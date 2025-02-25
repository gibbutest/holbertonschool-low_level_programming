#include "main.h"

/**
 * print_rev - sdrawkcaB
 *
 * Description: Print it backwards.
 * @s: The string
 */
void print_rev(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i]; i++)
		count++;

	while (length != 0)
	{
		_putchar(s[length - 1]);

		length--;
	}

	_putchar('\n');
}
