#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *_strdup()- returns a pointer to a newly allocated space in memory
 * which comtains ac copy of the string given as a parameter
 * @str: string it receives
 *
 * Return: pointer to string if sucessful or NULL if unsuccessful
 */

char *_strdup(char *str)
{
	char *ptr;
	long unsigned int i;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * strlen(str));
	
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


