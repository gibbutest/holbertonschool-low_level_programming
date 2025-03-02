#include "main.h"

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
