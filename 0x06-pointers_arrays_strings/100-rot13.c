#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * rot13 - encodes strings using rot13
 * @s: input string
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha(s[i]) && s[i] > 'm')
			s[i] = s[i] - 13;
		else if (isalpha(s[i]) && s[i] <= 'm')
			s[i] = s[i] + 13;
		printf("%c", s[i]);
	}

	return (s);
}
