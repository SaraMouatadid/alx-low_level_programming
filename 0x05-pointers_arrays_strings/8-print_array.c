#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of an int array separated by commas
 *
 * @a: the array to be printed
 * @n: the size of the array
 *
 * Return: No return statment
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", *a);
		for (i = 1; i < n; i++)
		{
			printf(" ,%d", *(a + i));
		}
	}
		printf("\n");
}
