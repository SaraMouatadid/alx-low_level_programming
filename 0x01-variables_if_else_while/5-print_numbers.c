#include <stdio.h>

/**
 * main - Entry point
 *
 * prints single digit numbers in increasing order
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		printf("%d", i++);
	printf("\n");
	return (0);
}
