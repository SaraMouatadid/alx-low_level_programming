#include "main.h"

/**
 * swap_int - swaps the values of two int variables
 *
 * @a: the pointer of the first variable
 * @b: the pointer of the second variable
 *
 * Return: No return statement
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
