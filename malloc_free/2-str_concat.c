#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Combines two string
 *
 * Description: Combines two string and returns value.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The combined string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int sum = 0;
	int pos = 0;
	char *combined;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		sum++;
	for (i = 0; s2[i] != '\0'; i++)
		sum++;

	combined = malloc((sum + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		combined[pos] = s1[i];
		pos++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		combined[pos] = s2[i];
		pos++;
	}
	combined[sum] = '\0';

	return (combined);
}
