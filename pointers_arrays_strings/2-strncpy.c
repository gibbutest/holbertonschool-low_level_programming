#include "main.h"

/**
 * _strncpy - Replace is a better word for it.
 *
 * Description: Overwrites the original with the new.
 * @dest: The original
 * @src: The new
 * @n: Limit
 *
 * Return: The new charset.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	for (; dest[i] != '\0' && i <= n; i++)
	{
		tmp[i] = src[i];
	}

	if ()

	return (tmp);
}
