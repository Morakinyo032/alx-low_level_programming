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
	int i, j;
	char *r, *c;

	c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
