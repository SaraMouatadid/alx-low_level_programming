#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: the string to print
 *
 * Return: No return statment
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	j = i / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
