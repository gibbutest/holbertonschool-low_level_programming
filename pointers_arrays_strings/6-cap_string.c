#include "main.h"

/**
 * cap_string - Capitialize the strings
 *
 * Description: All The Strings MUST Be Capitialize
 * @s: The string
 *
 * Return: The Capitialize String
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (; s[i]; i++)
		if (s[i] < 65 || s[i] > 122)
		{
			int next = s[i + 1];

			if (next >= 'a' && next <= 'z')
				if (next != '6' && next != '-')
					next = next - 32;
		}

	return (s);
}
