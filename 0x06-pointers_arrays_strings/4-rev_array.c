#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of element of the input array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
			printf(", ");
		printf("%i", a[i]);
		i--;
	}
}
