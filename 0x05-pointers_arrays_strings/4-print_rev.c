#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		if (s[i] == '\0')
			continue;
		else
			printf("%c", s[i]);
	}
	printf("\n");
}
