#include "main.h"

/**
 * rev_string - reverses an input string
 *
 * @s: the string to be reversed
 *
 * Return: No return statment
 */
void rev_string(char *s)
{
	char *p;
	int i = 0, j = 0;
	char a;

	p = s;
	while (*p != '\0')
	{
		i++;
		p++;
	}
	while (j <= (i - 1) / 2)
	{
		a = *(s + j);
		*(s + j) = *(s + i - j - 1);
		*(s + i - j - 1) = a;
		j++;
	}
}
