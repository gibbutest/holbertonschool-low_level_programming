#include "main.h"

/**
 * string_toupper - TO UPPERCASE
 *
 * Description: mAkE aLl LeTtErS cApS
 * @s: the string.
 *
 * Return: The resulting string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; i s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
