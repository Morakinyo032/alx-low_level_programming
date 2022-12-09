#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints numbers
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%i", i);
		}
		
		printf("\n");
	}
}
