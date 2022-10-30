#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* print_dog - function that prints a struct dog
* @d: pointer to structure
*/
void print_dog(struct dog *d)
{
	struct dog *ptr;

	ptr = d;
	if (ptr == NULL)
	{
		return;
	}
	if (ptr->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", ptr->name);
	}
	if (!ptr->age)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %f\n", ptr->age);
	}
	if (ptr->owner == NULL)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", ptr->owner);
	}
}


