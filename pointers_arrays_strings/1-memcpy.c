#include "main.h"

/**
 * _memcpy - Copy the memory Kronk!
 *
 * Description: Copies the memory
 * @dest: The final destination
 * @src: The origial
 * @n: The amount
 *
 * Return: The final destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
