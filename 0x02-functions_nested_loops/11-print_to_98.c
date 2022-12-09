#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to check
 */
void print_to_98(int n)
{
	int j;

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%i", j);
			if (j == 98)
				continue;

			printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%i", n);
	}

	else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%i", j);
			if (j == 98)
				continue;

			printf(", ");
		}
	}

	printf("\n");
}
