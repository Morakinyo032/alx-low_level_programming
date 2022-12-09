#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char txt[] = "_putchar";

	while (i < 8)
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
