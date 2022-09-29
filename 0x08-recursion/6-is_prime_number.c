#include "main.h"

/**
 * is_prime_number - Function to print prime numbers
 * @n:  integer to check if prime
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if ((n % 2) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
