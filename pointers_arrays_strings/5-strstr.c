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
		char *hay = haystack;
		char *need = needle;
	
		for (; *need != '\0' && *hay == *need; need++)
			hay++;

		if (*need == '\0')
			return (haystack);
	}

	return (0);
}
