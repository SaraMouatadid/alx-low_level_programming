#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the smallest of all possible combination of two digits
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i < '9')
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
