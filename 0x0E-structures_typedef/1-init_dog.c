#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function that initializes structure variable
 * @d: name of structure
 * @name: pointer to name of dog
 * @age: dog age
 * @owner: pointer to dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*d = malloc (sizeof(struct dog));*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
