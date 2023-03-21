#include "main.h"

/**
 * _islower - tests if a character is lowercase
 *
 * @c: the character to test
 *
 * Return: if character is lowercase 1 else 0
 */
int _islower(int c)
{
	return (c <= 'z' && c >= 'a' ? 1 : 0);
}
