# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
	int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
		if (i == 9)
		{
			break;
		}
		putchar (',');
		putchar (' ');
	}
	putchar (' ');


	return (0);
}
