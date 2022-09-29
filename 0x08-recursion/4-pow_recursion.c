#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Function that computes power
 * @x: integer to find power
 * @y: number of times to multiply x
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
