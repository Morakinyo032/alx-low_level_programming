#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints times table
 * @n: input integer
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			continue;

		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				printf("%d", k);

			else
				printf("%4d", k);

			if (j == n)
			{
				continue;
			}
			printf(",");
		}

		printf("\n");
	}
}
