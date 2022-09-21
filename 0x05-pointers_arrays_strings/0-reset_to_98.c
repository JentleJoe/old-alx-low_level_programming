#include <stdio.h>
#include "main.h"

/**
 * Main - Entry Point
 * reset_to_98 - updates the value of n
 * @n: pointer
 *
 */

/**
 *	old code
 *
 *int main(void)
 *{
 *	int n;
 *	int *p;
 *
 *	n = 402;
 *	p = &n;
 *
 *	using printf
 *	printf ("n=%d", n);
 *	*p = 98;
 *	printf ("n=%d", n);
 *
 *	using  _putchar
 *	_putchar ('n');
 *	_putchar ('=');
 *	_putchar (n + '0');
 *	_putchar ('\n');
 *
 *	*p = 98;
 *	_putchar (p + '0');
 *
 *	_putchar ('\n');
 *}
 */

void reset_to_98(int *n)
{
	*n = 98;
}

