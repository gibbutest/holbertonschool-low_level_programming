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
	char tmp;

	length = 0;

	for (i = 0; s[i]; i++)
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}

