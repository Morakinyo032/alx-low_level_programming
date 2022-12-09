#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other characters of a string
 * @str: string input
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);

		else
			continue;
	}
	printf("\n");
}
