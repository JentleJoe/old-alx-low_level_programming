#include "main.h"

/**
 *_islower(int c) - checks for lower case characters
 *
 * Return : 1 if c is lower and 0 otherwise
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
	return(0);
}
