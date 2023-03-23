#include "main.h"

/**
 * largest_number - Entry point
 *
 * @a: first parameter
 * @b: second parameter
 * @c: third parameter
 *
 * Return: the largest value
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
