#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * infinite_add - Adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that will store the result of the function
 * @size_r: buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, i;

	i = size_r - 1;
	sum = atoi(n1) + atoi(n2);
	if (sum < 0)
	{
		r[0] = '-';
		sum *= -1;
	}
	while (sum)
	{
		r[i] = sum % 10 + '0';
		sum /= 10;
		i--;
	}
	return (r);
}
