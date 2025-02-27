#include <stdio.h>
#include "main.h"

/**
 * _atoi - Ayoo?
 *
 * Description: It do the things
 * @s: string to be checked
 *
 * Return: Something
 */
int _atoi(char *s)
{
	int sum = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		if (sum)
			sum = (sum * 10) + ((*s - '0') * sign);
		else
			sum = (*s - '0') * sign;

		s++;
	}

	return (sum * sign);
}
