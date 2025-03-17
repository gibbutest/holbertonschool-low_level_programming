#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - BE FREE!!!
 * @d: The doc struct.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
