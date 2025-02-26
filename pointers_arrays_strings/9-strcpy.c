#include "main.h"

/**
 * _strcpy - Copy one to another.
 *
 * Description: See above.
 * @dest: The new location.
 * @src: The original
 *
 * Return: The new.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
