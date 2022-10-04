#include <stdio.h>

/**
 * main - Program that prints the number of all arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0, if successful
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf (argv[0]);

	return (0);
}
