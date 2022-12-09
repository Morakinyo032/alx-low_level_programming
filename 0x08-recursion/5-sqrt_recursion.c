#include "main.h"
/**
 * _sqrt_recursion - print the natural sqare root of a number
 * @n: input int
 * @a: int parameter for sqr functiion
 * Return: -1 if n is not a perfect square, else root of n
 */
int sqr(int n, int a);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - checks square root of a number
 * @n: integer input
 * @a: integer input
 * Return: a for perfect square numbers and -1 for others
 */
int sqr(int n, int a)
{
	if (n == 1)
		return (1);
	if (a * a == n)
		return (a);
	if (a * a < n && (a + 1) * (a + 1) > n)
		return (-1);
	return (sqr(n, a + 1));
}
