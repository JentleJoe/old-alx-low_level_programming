#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0, if successful
 */

int main(int argc, char *argv[])
{
	int div1 = 0, div2 = 0, div3 = 0, div4 = 0, div5 = 0;
	int rem1, rem2, rem3, rem4;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

/* Assigning num to argv[1] only after confirming that */
/* we have two arguments, to prevent segmentation fault */

	else
	{
		num = atoi(argv[1]);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	else


	{
		if (num >= 25)
		{
			if (num % 25 == 0)
			{
				printf("%d\n", num / 25);
				return (0);
			}
			else
			{
				div1 = num / 25;
				rem1 = num % 25;
				num = rem1;
			}
		}
		else
		{

		}

		if (num >= 10)
		{
			div2 = num / 10;
			if (num % 10 == 0)
			{
				printf("%d\n", div1 + div2);
				return (0);
			}
			else
			{
				rem2 = num % 10;
				num = rem2;
			}
		}
		else
		{

		}

		if (num >= 5)
		{
			div3 = num / 5;
			if (num % 5 == 0)
			{
				printf("%d\n", div1 + div2 + div3);
				return (0);
			}
			else
			{
				rem3 = num % 5;
				num = rem3;
			}
		}
		else
		{

		}

		if (num >= 2)
		{
			div4 = num / 2;
			if (num % 2 == 0)
			{
				printf("%d\n", div1 + div2 + div3 + div4);
				return (0);
			}
			else
			{
				rem4 = num % 2;
				num = rem4;
			}
		}
		else
		{

		}

		if (num == 1)
		{
			div5 = 1;
			printf("%d\n", div1 + div2 + div3 + div4 + div5);
		}
	}

	return (0);
}
