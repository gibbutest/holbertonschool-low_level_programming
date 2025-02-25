#include "main.h"

/**
 * print_rev - sdrawkcaB
 *
 * Description: Print it backwards.
 * @s: The string
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length]; length++);

	while (length != 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
