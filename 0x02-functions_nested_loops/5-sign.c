#include "main.h"

/**
 * print_sign - prints the sign of an input number
 *
 * @n: the number tested
 *
 * Return: if n is positive 1 else if n is zero 0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
