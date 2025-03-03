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
	int found = 0;

	for (; *s != '\0'; s++)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			return (len);
	}

	return (len);
}
