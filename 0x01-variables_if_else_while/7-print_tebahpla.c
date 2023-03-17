#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabet in reverse order
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
