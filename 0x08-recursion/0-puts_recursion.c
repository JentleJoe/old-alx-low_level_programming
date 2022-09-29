#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Function to print string
 * @
 * @
 *
 * Return -
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s + '0');
		s = s + 1;
		_puts_recursion(s);
		
}


