#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: input integer
 *
 * Return: 0
 */
int print_sign(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		b = _putchar('+');
		i = _putchar(49);
	}

	else if (n < 0)
	{
		b = _putchar('-');
		i = _putchar('-') && _putchar(49);
	}

	else
	{
		b = _putchar('0');
		i = _putchar('0');
	}

	_putchar('\n');

	return (i);
	return (b);
		
}
