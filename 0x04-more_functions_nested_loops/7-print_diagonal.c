#include "main.h"
void triangle(int);
/**
 * print_diagonal - Prints diagonal line
 * @n: numbers of lines to print
 *
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		void triangle(n)
		{
			int j;

			if (n == 1)
			{
				_putchar('\\');
			}
			else
			{
				triangle(n - 1);
				for (j = 0; j < n; j++)
				{

					if (j == n - 1)
					{
						_putchar('\\');
					}
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}
