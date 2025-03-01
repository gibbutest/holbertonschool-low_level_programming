#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	for (; dest[i] && i < n; i++)
	{
		if (src[i] != '\0')
			tmp[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (tmp);
}
