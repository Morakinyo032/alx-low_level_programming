#include "main.h"
/**
 * print_most_numbers - Prints numbers
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
