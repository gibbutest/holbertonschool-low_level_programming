#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	
/*
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name %s\n", d->name);
	
	if (!d->)*/

}
