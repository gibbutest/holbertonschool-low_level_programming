#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Because we can't just use the standard one...
 * @name: The string to get the length of
 *
 * Return: lenght of string
 */

int _strlen(char *name)
{
	int i = 0;

	while (name[i])
		i++;

	return (i);
}

/**
 * new_dog - Make a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLength = _strlen(name);
	int ownerLength = _strlen(owner);
	int i;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(nameLength + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(ownerLength + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= nameLength; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= ownerLength; i++)
		dog->owner[i] = owner[i];
	
	dog->age = age;

	return (dog);
}
