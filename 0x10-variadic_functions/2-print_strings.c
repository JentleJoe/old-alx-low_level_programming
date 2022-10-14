#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: strings to be printed
 * @n: number of strings to print
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			break;
		}
		c = va_arg(ap, char *);
		if (c == NULL)
		{
			printf("nil");
		}
		else
		{
			if (i == n - 1)
			{
				printf("%s", c);
				break;
			}

			printf("%s%s", c, separator);
		}
	}
	va_end(ap);
	printf("\n");
}
