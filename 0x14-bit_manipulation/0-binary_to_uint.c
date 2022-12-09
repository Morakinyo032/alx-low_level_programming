#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: Point to the string to  be computed
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;
	int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	return (l);
}
/**
 * power - Computes the power an int
 * @x: integer base
 * @y: int index
 * Return: result
 */
unsigned int power(int x, int y)
{
	int i;
	unsigned int result;

	result = 1;
	if (y == 0)
	{
		return (1);
	}
	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}
/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	unsigned int n;
	unsigned int num;

	if (b == NULL)
		return (0);
	num = 0;
	len = _strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			n = b[i] % 2;
			n *= power(2, len - i - 1);
			num += n;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
