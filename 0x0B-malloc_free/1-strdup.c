#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *_strdup()- allocates a space and duplicates the string into it
 * @str: string it receives
 *
 * Return: pointer to string if sucessful or NULL if unsuccessful
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned long int i;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * strlen(str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}


	while (i < strlen(str))
	{
		*(ptr + i) = str[i];
		i++;
	}

	return (ptr);
}
