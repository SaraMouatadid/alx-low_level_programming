#include "main.h"

/**
 * _strncat - adds n characters of a given string
 * to the end of another string
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: the number of characters to be added to the first string
 *
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (j < n - 1)
		*(dest + i + j) = '\0';
	return (dest);
}
