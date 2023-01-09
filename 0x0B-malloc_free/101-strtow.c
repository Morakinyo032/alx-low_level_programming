#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strl - Calculate the length of char in an array
 * @s: Pointer to the array
 * Return: length of the array
 */
int strl(char *s)
{
	int i;

	if(!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * tokenize - Render a string to tokens and save them in a pointer tot pointer
 * @s: Pointer to a string
 * @toks: Pointer to tokens
 * Return: Pointer to pointers to tokens
 */
char **tokenize(char*s, char **toks)
{
	int i, j, k, l, x;
	char tmp[20];

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = i; s[j] != ' '; j++)
		{
			tmp[k] = s[j];
			k += 1;
		}
		tmp[k] = '\0';
		if (tmp[0] != '\0')
		{

			toks[x] = malloc(strl(tmp) + 1);
			if (toks[x] == NULL)
			{
				for (x -= 1; x >= 0; x--)
					free(toks[x]);
				free(toks);
			}
			for (l = 0; tmp[l] != '\0'; l++)
			{
				toks[x][l] = tmp[l];
			}
			toks[x][l] = '\0';
			x += 1;
		}
		i = j;
	}
	toks[x] = NULL;
	return (toks);
}

/**
 * strtow - Splits a string to words
 * @str: Pointer to the string to be splitted
 * Return: Pointer to Pointers
 */
char **strtow(char *str)
{
	char **t;
	int i, arraylen;

	arraylen = 0;
	if (str == NULL || strl(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > 0)
		{
			if (str[i] == ' ')
			{
				if (str[i - 1] != ' ')
					arraylen += 1;
			}
		}
		else if (str[i] != ' ' && str[i + 1] == '\0')
				arraylen += 1;
	}
	t = malloc((arraylen + 1) * sizeof(char *));
	if (t == NULL)
		return (NULL);
	tokenize(str, t);
	if (t == NULL)
		return (NULL);
	return (t);
}
