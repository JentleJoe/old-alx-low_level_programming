#include <stdio.h>

/**
 * main - prints the text
 * Return: 0
 */

int main(void)
{
	char ch;

	int i = 0;

		while (i < 10)
		{
			putchar(i + '0');
			i++;
		}
	ch = 'a';
		while (ch <= 'f')
		{
			putchar(ch);
			ch++;
		}
			putchar('\n');

	return (0);
}
