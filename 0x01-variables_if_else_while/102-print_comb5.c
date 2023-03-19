#include <stdio.h>

/**
 * main - Entry point
 *
 * print combinations of two two-digits numbers
 *
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '1';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '1'; l <= '9'; l++)
				{
					if (i <= k && j < l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if ((i + j) != ('9' + '8') || (k + l) != ('9' + '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
