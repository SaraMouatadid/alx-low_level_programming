#include <stdio.h>

/**
 * main - Entry point
 *
 * print the smallest of all combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i < '8')
	{
		for (j = '1'; j < '9'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
