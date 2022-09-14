#include "main.h"

/**
 * _islower - checks for lower case characters
 *
 * Return : 1 if c is a lowercase otherwise 0
 *
 * Description - This program returns duffrent valuesnfor different result
 *
 * @c: integer value received
 *
 */


int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
