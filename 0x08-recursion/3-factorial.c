#include "main.h"
/**
 * factorial - prints the factorial of an int
 * @n: Input integer
 * Return: -1 if n is lower than 0 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n *= factorial(n - 1);

	return (n);
}
