#include "main.h"

/**
 * puts2 - prints every other character of an input string
 *
 * @str: the string to print
 *
 * Return: no return statment
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}