# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
	int main(void)
{
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar (i + '0');
		putchar (',');
		putchar (' ');
	}
		putchar ('9');


	return (0);
}
