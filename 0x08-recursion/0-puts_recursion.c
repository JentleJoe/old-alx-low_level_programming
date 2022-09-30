#include "main.h"

/**
 * _puts_recursion - Function to print string
 * @s : string to print
 *
 * Return -
 */

void _puts_recursion(char *s)
{
	char *p;

	p = s;

	if (*p != '\0')
	{
		_putchar(*p);
		p = p + 1;
		_puts_recursion(p);
	}
	else
	_putchar ('\n');
}


