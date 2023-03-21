#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: no return statment
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
