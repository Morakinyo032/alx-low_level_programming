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
	va_list args;

	va_start(args, n);

	int i, sum;

	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		else
			sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
