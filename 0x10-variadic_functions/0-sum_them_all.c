#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of undefined args
 *
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < (int) n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
