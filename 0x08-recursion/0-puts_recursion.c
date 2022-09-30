#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Function to print string
 * @s: pointer contaiing string
 *
 * Return - void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
	else
	{
		_putchar ('\n');
	}
}

