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
	int i = 0;

	for (; *s1 && !res; i++)
	{
		if (*s1 != *s2)
			res = *s1 - *s2;

		s1++;
		s2++;
	}

	return (res);
}
