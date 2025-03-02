#include "main.h"

char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (; s[i]; i++)
		if (s[i] < 65 || s[i] > 122)
			if (s[i + 1] >= 'a' && s[i + 1] < 'z')
				if (s[i + 1] != '6' && s[i] != '-')
					s[i + 1] = s[i + 1] - 32;

	return (s);
}
