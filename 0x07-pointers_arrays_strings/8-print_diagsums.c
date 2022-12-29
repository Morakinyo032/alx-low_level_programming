#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of square matrix of ints
 * @a: input string
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * (i + 1) - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
