#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the numbers of base 16 in lower case
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
