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
	int n;

	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = 0; i < len; i++)
	{
		if (i > n)
			printf("%c", str[i]);

		else
			continue;
	}
	printf("\n");
}
