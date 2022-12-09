#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int j;
	char i;

	for (j = 0; j <= 9; j++)
		putchar(j % 10 + '0');


	for (i = 'a'; i <= 'f'; i++)
		putchar(i);


	putchar('\n');

	return (0);
}
