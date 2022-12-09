#include "main.h"
/**
 * base_converter - converts decimal to base 2
 * @n: Decimal number to be converted
 * @base: Base of conversion
 * Return: POinter to the string containing the converted number
 */
int *base_converter(unsigned long int n, int base)
{
	int i, j;
	int buffer[65];
	int *tmp;

	for (i = 0; n > 0; i++)
	{
		buffer[i] = n % base;
		n  /= base;
	}
	tmp = malloc(i * sizeof(int));
	if (tmp == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		tmp[j] = buffer[j];
	tmp[j] = '\0';
	free(tmp);
	return (tmp);
}
/**
 * countbits - counts number of bits in an int
 * @n: number to be worked on
 * Return: an int
 */
unsigned int countbits(int *n)
{
	unsigned int l;

	l = 0;
	if (n == NULL)
		return (0);
	while (*n > 0)
	{
		*n = *n / 2;
		l++;
	}
	return (l - 1);
}
/**
 * get_bit - Finds the bit at a particular index of a number
 * @n: Number to be evaluated
 * @index: Index to be looked for
 * Return: the value of the bit at index "index"
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *tmp;
	unsigned int len;

	if (!index)
		return (-1);
	tmp = base_converter(n, 2);
	if (tmp == NULL)
		return (-1);
	len = countbits(tmp);
	if (index > len)
		return (-1);
	if (index > 64)
		return (-1);
	return (tmp[index]);
}
