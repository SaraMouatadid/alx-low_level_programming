#include <stdio.h>

/**
 * main - Entry point
 *
 * prints alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 'a';
	int X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
