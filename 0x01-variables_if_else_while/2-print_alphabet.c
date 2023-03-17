#include <stdio.h>

/**
 * main - Entry point
 *
 * print the alphabet in lower case
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
