#include <stdio.h>

/**
 * main - Entry point
 *
 * displays the size of different data types
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int %lu byte(s)\n", sizeof(d));
	printf("Size of a float %lu byte(s)\n", sizeof(e));
	return (0);
}
