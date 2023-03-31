#include "main.h"

/**
 * print_number - prints an input integer using _putchar
 *
 * @n: the input integer
 *
 * Return: no return statement
 */
void print_number(int n)
{
	int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
