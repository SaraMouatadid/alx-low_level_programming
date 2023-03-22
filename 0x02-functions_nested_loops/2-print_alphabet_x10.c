#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: No return statement
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int a = 'a';

	while (i < 10)
	{
		while (a >= 'a' && a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
