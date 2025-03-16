#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;
	int sum = 0;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sum = size * nmemb;

	tmp = malloc(sum);
	if (!tmp)
		return (NULL);

	for (i = 0; i < sum; i++)
		tmp[i] = 0;

	return (tmp);
}
