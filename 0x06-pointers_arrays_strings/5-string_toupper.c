#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase of a string to uppercase
 * @s: string to input
 * Return: returns the input string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		printf("%c", s[i]);
	}

	return (s);
}
