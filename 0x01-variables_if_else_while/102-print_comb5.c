#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if ((10 * i + j) > (10 * k + l) || (10 * i + j) == (10 * k + l))
						continue;
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(' ');
					putchar(k % 10 + '0');
					putchar(l % 10 + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
