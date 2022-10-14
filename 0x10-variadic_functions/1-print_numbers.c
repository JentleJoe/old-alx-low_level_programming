#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: numer of integers passed
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			if (i == n - 1)
			{
				printf("%d", num);
				break;
			}
			printf("%d%s ", num, separator);
		}
	}
	va_end(ap);

	printf("\n");
}
