#include "main.h"

/**
 * _strcat - concatenates twxo strings
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		j++;
	for (k = 0; k <= j; k++)
		*(dest + i + k) = *(src + k);
	return (dest);
}
