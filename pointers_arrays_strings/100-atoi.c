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
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			break;

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
