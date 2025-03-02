#include "main.h"

/**
 * leet - l337
 *
 * Description: 7r4N5F0rM 70 1337 5P34K
 * @s: 7H3 57r1N6 70 C0NV3r7
 *
 * Return: 7H3 1337 5P34K
 */
char *leet(char *s)
{
	int a;
	int b;
	char norms[10] = {"aAeEoOtTlL"};
	char leet[10] = {"44330077lL"};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; leet[b]; b++)
			if (s[a] == norms[b])
				s[a] = leet[b];
	}

	return (s);
}
