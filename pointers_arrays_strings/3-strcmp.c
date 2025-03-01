#include "main.h"

/**
 * _strcmp - eYes
 *
 * Description: Just does the things, innit?
 * @s1: First
 * @s2: Second
 *
 * Return: Is equal?
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 && !result)
	{
		if (*s1 != *s2)
			result = *s1 - *s2;

		s1++;
		s2++;
	}

	return (result);
}
