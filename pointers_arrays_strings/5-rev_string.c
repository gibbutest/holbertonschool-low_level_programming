#include "main.h"

/**
 * rev_string - sdrawkcaB
 *
 * Description: Print it backwards.
 * @s: The string
 */
void rev_string(char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i]; i++)
		length++;

	while (length != 0)
	{
		_putchar(s[length - 1]);

		length--;
	}
}

