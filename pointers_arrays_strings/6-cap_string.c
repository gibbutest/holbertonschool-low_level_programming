#include <stdio.h>
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
	int a;
	int b;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (a = 0; s[a]; a++)
		for (b = 0; sep[b]; b++)
			if (s[a] == sep[b] && (s[a + 1] >= 'a' && s[a + 1] <= 'z'))
				s[a + 1] = s[a + 1] - 32;

	return (s);
}
