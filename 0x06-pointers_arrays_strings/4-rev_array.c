#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of element of the input array
 */
void reverse_array(int *a, int n)
{

	int i, *tmp, j;

	tmp = malloc(sizeof(int) * n);
	if (tmp == NULL)
		return;
	for (i = 0; i < n; i++)
		tmp[i] = a[n - i - 1];
	for (j = 0; j < n; j++)
		a[j] = tmp[j];
}
