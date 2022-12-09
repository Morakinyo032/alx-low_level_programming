#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints all minutes of a day
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
