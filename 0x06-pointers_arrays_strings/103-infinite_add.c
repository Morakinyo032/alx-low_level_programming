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
	sum = 0;
	len1 = strlen(n1) - 1;
	len2 = strlen(n2) - 1;
	if (len1 >= len2)
	{

	}
	for (i = size_r - 1; i >= 0; i)
	{
		rem = (n1[j] - '0') + (n2[j] - '0');
		if (rem > 9)
		{
			sum *= 10;
			sum += rem;
		}
	}
	return (r);
}
