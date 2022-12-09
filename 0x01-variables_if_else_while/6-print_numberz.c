#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = 10; num < 20; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
