#include <stdio.h>

/**
 * main - Entry point
 *
 * print single digit numbers in escending order seperated by a comma
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
