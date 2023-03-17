#include <stdio.h>

/**
 * main - Entry point
 *
 * prints single digit numbers in increasing order using putchar
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
