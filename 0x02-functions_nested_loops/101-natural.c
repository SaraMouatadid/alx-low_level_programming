#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("the sum of all the multiples of 3 and 5 below 1024 is %d\n", sum);
	return (0);
}
