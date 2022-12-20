#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half characters of a string
 * @str: string input
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 != 0)
		len = len - 1;
	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
