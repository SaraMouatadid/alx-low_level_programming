#include <stdio.h>

/**
 * main - Entry point
 *
 * computes the sum of even-valued terms
 * of the fibonacci sequence lesser than "4,000,000"
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 0, b = 1, n = 0;
	int count = 0;
	long int sum = 0;

	while (count <= 50 && n <= 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		count++;
		if (n <= 4000000 && n % 2 == 0)
			sum += n;
	}
	printf("%ld\n", sum);
	return (0);
}
