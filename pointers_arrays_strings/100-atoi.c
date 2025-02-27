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
	int i = 0;
	int eval = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9' && eval == 0)
		{
			sum = (sum * 10) + (s[i] - '0');
		}
		else {
			if (eval == 1)
				eval = 1;
		}

		if (s[i] == '-' && eval == 0)
		{
			sign *= -1;
		}

		i++;
	}
	
	return (sign * sum);
}
