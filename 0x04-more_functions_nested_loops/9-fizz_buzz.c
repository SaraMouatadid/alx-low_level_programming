#include <stdio.h>

/**
 * main - Entry point
 *
 * prints numbers from 1 to 100 all while replacing
 * multiples of 3 with word fizz
 * multiples of 5 with the word buzz
 * and the multiples of 15 with the word fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
