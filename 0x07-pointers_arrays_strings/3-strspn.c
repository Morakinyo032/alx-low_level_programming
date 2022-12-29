#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * strcheck - Check for a char in a string
 * @s: Pointer to string to check
 * @idx: Index of s to stop checking
 * @c: Char to look for
 * Return: 1 if found, -1 otherwise
 */
int strcheck(char *s, int idx, char c)
{
	int i;

	for (i = idx; i >= 0; i--)
	{
		if (s[i] == c)
			return (1);
	}
	return (-1);
}
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
 * _strspn - Gets the length of a prefix substring
 * @s: Input string
 * @accept: Input string
 * Return: the number of bytes  in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num, len, len1;

	num = 0;
	len = strlen(accept);
	len1 = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (charcmp(s[i], accept[j]) == 1 && strcheck(s, i - 1, s[i]) == -1)
			{
				num += 1;
				break;
			}
		}
		if (num == len)
		{
			len1 = (unsigned int) (i + 1);
			break;
		}
	}
	return (len1);
}
