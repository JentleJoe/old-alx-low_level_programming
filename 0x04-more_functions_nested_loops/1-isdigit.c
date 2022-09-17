#include "main.h"

/**
  * _isdigit - Main entry point to check for digit
  * @c: variable that cheecks for digit
  *
  *Return: 1 if c is a digit, 0 otehrwise
  */


int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);

}

