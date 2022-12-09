#include "main.h"
/**
 * countSetBits - counts set bits
 * @n: integer input
 * Return: count
 */

int countSetBits(int n)
{
	int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 * flip_bits - returns the number of bits to flip
 * @n:Firt input int
 * @m: Second input int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
