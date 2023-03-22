#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int left;

	if (n < 0)
		n = -n;
	left = n % 10;
	if (left < 0)
		left = -left;
	_putchar(left + '0');
	return (left);
}
