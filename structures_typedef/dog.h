#ifndef DOG_H
#define DOG_H

/**
 * struct dog - What the dog doin?
 * @name: name
 * @owner: owner
 * @age: age
 *
 * Description: ????
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
