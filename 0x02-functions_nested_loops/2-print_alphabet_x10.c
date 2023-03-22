#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: No return statement
 */
void print_alphabet_x10(void)
{
	int i;
	int a = 'a';

	for (i = 0; i < 10; i++)
	{
		while (a >= 'a' && a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
