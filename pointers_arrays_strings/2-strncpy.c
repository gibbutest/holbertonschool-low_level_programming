#include "main.h"

/**
 * _strncpy - Wowzers
 *
 * Description: Copyn't
 * @dest: The original
 * @src: The new
 * @n: The limit
 *
 * Return: The replaced.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	for (; *dest && i < n; i++)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}

		dest++;
	}

	dest = tmp;

	return (dest);
}
