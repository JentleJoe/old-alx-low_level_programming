#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: first strng
 * @s2: second string
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1 != s2)
		{
			return (*s1 - *s2);
		}

		/* prevent increment up to escape character */
		if ((*s1 + 1) == '\0' && (*s2 + 1) == '\0')
		{
			break;
		}
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}
