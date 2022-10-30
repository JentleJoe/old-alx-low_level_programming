#include "dog.h"
#include <stdlib.h>

/**
* new_dog - Funciton that creates a new dog
* @name: name of dog
* @age: dog age
* @owner: dog owner
* Return:struct pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	}
	return (ptr);
}
