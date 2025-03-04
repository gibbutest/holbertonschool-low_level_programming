#include "main.h"

/**
 * _strstr - An actual useful function?
 *
 * Description: That's crazy.
 * @haystack: The string to search.
 * @needle: The string to search in the haystack.
 *
 * Return: Pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *tmp = haystack;
	
		for (; *needle != '\0' && *tmp == *needle; needle++)
			tmp++;

		if (*tmp == '\0')
			return (haystack);
	}

	return (0);
}
