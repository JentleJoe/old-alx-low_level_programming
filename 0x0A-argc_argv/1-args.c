#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of all arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0, if successful
 *
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
	{
		putchar (argc + '0');
		putchar ('\n');
	}

	return (0);
}
