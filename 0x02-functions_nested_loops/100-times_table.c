#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: is the input number
 *
 * Return: no return statement
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
					_putchar(p + '0');
				else if (p < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 100) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
