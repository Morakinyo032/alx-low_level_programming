#include "main.h"
/**
 * _pow_recursion - prints the value of an int raised to power
 * @x: base integer
 * @y: exponent
 * Return: -1 if y is less than 0, else value of x raised power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);

	return (x);
}
