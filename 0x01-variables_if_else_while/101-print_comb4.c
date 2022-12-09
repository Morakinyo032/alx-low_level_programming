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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i == j || i == k || j == k)
					continue;

				if (i > j || i > k || j > k)
					continue;


				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');


				if (i == 7 && j == 8 && k == 9)
					continue;


				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');

	return (0);

}
