#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concat string, with a limit on the 2nd string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The limit of chars for the 2nd string.
 *
 * Return: The newly formed string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int sum = 0;
	int pos = 0;
	char *combined;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		sum++;
	for (i = 0; s2[i] != '\0' && i < n; i++)
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
	combined[sum + 1] = '\0';

	return (combined);
}
