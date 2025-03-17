#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %d\n", d->name || "(nil)");
	printf("Age: %d\n", d->age || "(nil)");
	printf("Owner: %d\n", d->owner || "(nil)");
	
/*
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name %s\n", d->name);
	
	if (!d->)*/

}
