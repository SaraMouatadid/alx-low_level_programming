#include "main.h"

/**
 * _isalpha - checks if input is a letter
 *
 * @c: the input to be checked
 *
 * Return: if c is a letter 1 lese 0
 */
int _isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') ? 1 : 0);
}
