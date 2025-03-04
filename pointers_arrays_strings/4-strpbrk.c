#include "main.h"

/**
 * _strpbrk - Function
 *
 * Description: Search the string!
 * @s: The string
 * @accept: The string MUST include these!!!!
 *
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);

	return (0);
}
