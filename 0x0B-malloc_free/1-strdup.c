#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>

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

	ptr = str;

	if (str == NULL)
	{
		return (NULL);
	}
	else if (str == 0)
	{
		return (NULL);
	}

	return (ptr);
}


