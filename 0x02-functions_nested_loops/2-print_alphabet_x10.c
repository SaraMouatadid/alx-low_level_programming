#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: No return statement
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	_putchar ('\n');
}
