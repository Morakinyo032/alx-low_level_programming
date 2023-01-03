#include "main.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the input string
 * @c: character to look for
 * Return: a pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
