#include "main.h"

char *_strcat(char *dest, char *src)
{
	int pos = 0;
	int i;
	char *tmp = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		tmp[pos] = dest[i];
		pos++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		tmp[pos] = src[i];
		pos++;
	}

	return (tmp);
}
