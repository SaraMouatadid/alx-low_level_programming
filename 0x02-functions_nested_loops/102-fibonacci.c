#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	long int a = 0, b = 1, n;
	int count;

	while (count < 50)
	{
		n = a + b;
		a = b;
		b = n;
		count++;
		printf("%ld", n);
		if (count != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
