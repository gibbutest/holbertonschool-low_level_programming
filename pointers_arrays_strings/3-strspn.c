#include "main.h"

/**
 * _strspn - Hamburger
 *
 * Description: Cheeseburger
 * @s: Big Mac
 * @accept: Whopper
 *
 * Return: Big Mac Whopper
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len = 0;

	for (; *s != '\0'; s++)
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i] && ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')))
				len++;

	return (len);
}
