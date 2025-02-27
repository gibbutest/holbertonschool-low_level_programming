#include "main.h"

/**
 * _strncat - Concat but with a limit?
 *
 * Description: Combine the two string.
 * @dest: The original
 * @src: The new
 * @n: The limit
 *
 * Return: The combined and the limit.
 */
char *_strncat(char *dest, char *src, int n)
{
	int pos = 0;
	int i;
	char *tmp = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		tmp[pos] = dest[i];
		pos++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		tmp[pos] = src[i];
		pos++;
	}

	return (tmp);
}

