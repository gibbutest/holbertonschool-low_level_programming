#include "main.h"

/**
 * _memset - eYes
 *
 * Description: Fill the memory Kronk!
 * @s: The string
 * @b: The char?
 * @n: The amount
 *
 * Return: The memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
