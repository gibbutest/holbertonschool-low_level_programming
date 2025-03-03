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
	while(--n)
	{
		*s = b;
		s++;
	}

	return (s);
}
