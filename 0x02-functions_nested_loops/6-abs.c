#include "main.h"
#include <stdio.h>
/**
 * _abs - prints absolute value of an interger
 * @n: input integer
 * Return: absolute value of n
 */
int _abs(int n)
{
	signed int i;
	signed int a;

	if (n > 0)
	{
		a = n;
		i = printf("%d", a);
	}
	if (n < 0)
	{
		a = -n;
		i = printf("%d", a);
	}
	else
	{
		i = _putchar('0');
	}

	return (0);
}
