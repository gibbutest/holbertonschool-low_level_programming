#include "main.h"

char *_strchr(char *s, char c)
{
	for (; *s; s++)
		if (*s == c)
			return (s);

	return (0);
}
