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
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	return (*s1 > *s2) - (*s1 < *s2);
}
