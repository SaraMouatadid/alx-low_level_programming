#include "main.h"

/**
 * _strcpy - copies a string into an array
 *
 * @dest: pointer to the array where to past the string
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i - 1) != '\0');
	return (dest);
}
