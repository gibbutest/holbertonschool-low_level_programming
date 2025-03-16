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
	char *combined;
	int i;
	int len1 = 0;
	int len2 = 0;
	int sum = 0;
	int limit = (int)n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (limit >= (len2))
		limit = len2;
	sum = len1 + limit;

	combined = malloc((sum + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		combined[i] = s1[i];
	for (i = 0; i < limit; i++)
		combined[len1 + i] = s2[i];
	combined[sum] = '\0';

	return (combined);
}
