#include "main.h"
#include <string.h>

/**
 * charcmp - Compares two chars
 * @c1: First char
 * @c2: Second char
 * Return: 1 if they are similar, -1 otherwise
 */
int charcmp(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	return (-1);
}

/**
 * _strpbrk - Locates where the 1st byte of a str in another str
 * @s: Input string
 * @accept: Input string
 * Return: a pointer to the byte if found or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
