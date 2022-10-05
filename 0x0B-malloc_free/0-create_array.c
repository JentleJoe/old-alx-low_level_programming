#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *create_array - creates an array of chars
 * and initialize them with a specific char
 * @c: char
 * @size: size of char arrays
 *
 * Return: ptr if sucessful or NULL if unsuccessful
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(c) * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	return (ptr);
}


