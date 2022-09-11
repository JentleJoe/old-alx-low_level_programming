#include <stdio.h>

/**
 * main - entry point for all data
 *
 * Return: return 0 if successful
 */

int main(void)
{
	int i;
	float f;
	char c;
	long int d;
	long long int e;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(d));
	printf("Size of long long int: %ld byte(s)\n", sizeof(e));
	printf("Size of float: %ld byte(s)\n", sizeof(f));

	return (0);
}
