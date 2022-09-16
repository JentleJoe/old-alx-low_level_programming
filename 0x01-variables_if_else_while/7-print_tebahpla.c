# include <stdio.h>

/**
 * main - prints the text
 * Return: 0
 */

int main(void)
{
	char ch = 'z';


		while (ch <= 'z' && ch >= 'a')
		{
			putchar(ch);
			ch--;
		}
		putchar('\n');

	return (0);
}
