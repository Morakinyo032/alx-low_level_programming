#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	char t[len];
	for (j = 0; j < i; j++)
		t[j] = s[i -j -1];
	t[j] = '\0';
	for (j = 0; j < i; j++)
		s[j] = t[j];
}
