#include <stdio.h>

/**
 * main - Entry point
 *
 * prints alphabet exept e and q
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
