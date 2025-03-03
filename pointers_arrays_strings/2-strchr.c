#include "main.h"

/**
 * _strchr - Wack ass question
 *
 * Description: Why does this work?
 * @s: The string
 * @c: The character to find
 *
 * Return: char or NULL?
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
		if (*s == c)
			return (s);
	}

	return (0);
}
