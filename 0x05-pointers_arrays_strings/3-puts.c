#include "main.h"

/**
 * _puts - prints an input string to the stdout
 *
 * @str: the string to print
 *
 * Return: no return statment
 */
void _puts(char *str)
{
	char *i;
	char a;

	i = str;
	while (*i != '\0')
	{
		a = *i;
		_putchar(a);
		i++;
	}
	_putchar('\n');
}
