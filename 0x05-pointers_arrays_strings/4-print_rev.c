#include "main.h"

/**
 * print_rev - prints an input string in reverse
 *
 * @s: the string to reverse
 *
 * Return: No return statment
 */
void print_rev(char *s)
{
	char *p;
	int i = 0;
	char a;

	p = s;
	while (*p != '\0')
	{
		p++;
		i++;
	}
	while (i != 0)
	{
		i--;
		a = s[i];
		_putchar(a);
	}
	_putchar('\n');
}
