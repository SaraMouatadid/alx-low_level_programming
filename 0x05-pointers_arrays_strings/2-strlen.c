#include "main.h"

/**
 * _strlen - computes the length of string
 *
 * @s: the input string
 *
 * Return: Returns the length of the strength
 */
int _strlen(char *s)
{
	char *i;
	int count = 0;

	i = s;
	while (*i != '\0')
	{
		count++;
		i = i + 1;
	}
	return (count);
}
