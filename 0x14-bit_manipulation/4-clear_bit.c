#include "main.h"
/**
 * power - Computes the power an int
 * @x: integer base
 * @y: int index
 * Return: result
 */
unsigned long int power(unsigned int x, unsigned int y)
{
	unsigned int i, result = 1;

	if (y == 0)
		return (1);
	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to int
 * @index: bit's index to be set to 0
 * Return: 1 if it worked, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_number;

	new_number = power(2, index);
	if (*n < new_number || n == NULL)
	{
		*n = 0;
		return (-1);
	}
	else
	{
		*n -= new_number;
		return (1);
	}
}
