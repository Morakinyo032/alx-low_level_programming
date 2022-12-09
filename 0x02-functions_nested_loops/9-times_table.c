#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints times table 9
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
				printf("%d", k);

			else
				printf("%3d", k);

			if (j == 9)
				continue;

			printf(",");

		}
		printf("\n");
	}
}
