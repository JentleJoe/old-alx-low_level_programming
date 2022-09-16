#include <stdio.h>

/**
 * main - prints the text
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	i = 0;

	while (i >= 0 && i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");


	return (0);
}
