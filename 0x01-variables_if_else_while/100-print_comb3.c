# include <stdio.h>
/**
 * main - Entry point
 * @i - first integer variable
 * @a - second integer variable
 *
 * Return: 0
 */
	int main(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (i >= a)
			{
				continue;
			}
			putchar (i + '0');
			putchar (a + '0');
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
