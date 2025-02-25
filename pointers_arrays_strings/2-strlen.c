#include "main.h"

/**
 * _strlen - Length of string
 *
 * Description: yes
 * @s: the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
		i++;

	return (i);
}
