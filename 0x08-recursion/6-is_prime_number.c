#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: number to check for
 * @a: input parameter for prime function
 * Return: 1 if true, 0 otherwise
 */
int prime(int n, int a);

int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - checks for prime number
 * @n: int input
 * @a: int input
 * Return: 1 if true and 0 otherwise
 */
int prime(int n, int a)
{
	if (n < 2)
		return (0);
	if (a > n / 2)
		return (1);
	if (n % a == 0)
		return (0);
	return (prime(n, a + 1));
}
