#include <stdio.h>
#include "main.h"
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
	r = *n1 + *n2;

	return (r);
}
