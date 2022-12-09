#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to input
 *
 * Return: 1 if c is lowercase
 * 0 if otherwise
 */
int _islower(int c)
{
	int i;

	if (c > 96 && c < 123)
	{
		i = _putchar(49);
	}

	else
	{
		i = _putchar('0');
	}

	return (i);
}
