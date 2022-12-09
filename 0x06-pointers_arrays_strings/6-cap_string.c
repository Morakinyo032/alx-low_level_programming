#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: return the input string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\t' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		printf("%c", s[i]);
	}
	return (s);
}
