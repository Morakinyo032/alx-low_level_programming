#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @n: Input
 *
 * Return: returns the value of the digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	int i; 
	i = _putchar(n % 10 + '0');

	return (i);
}
