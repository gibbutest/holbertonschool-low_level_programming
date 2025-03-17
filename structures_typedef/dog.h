#ifndef DOG_H
#define DOG_H

/**
 * struct dog - What the dog doin?
 * @name: name
 * @owner: owner
 * @age: age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
