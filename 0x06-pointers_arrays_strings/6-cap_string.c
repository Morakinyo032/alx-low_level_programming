#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_lower - Check for lowercase letter
 * @c: char to check
 * Return: 1 if true, else -1
 */
int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (-1);
}

/**
 * iscapital - Check for letter
 * @c: char to check
 * Return: 1 if true, else -1
 */
int iscapital(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (-1);
}

/**
 * is_alpha - Check for letter
 * @c: char to check
 * Return: 1 if true, else -1
 */
int is_alpha(char c)
{
	if (is_lower(c) == 1 || iscapital(c) == 1)
		return (1);
	return (-1);
}

/**
 * is_separator - Checks for separator in a string
 * @c: Char to check
 * Return: 1 if true, else -1
 */
int is_separator(char c)
{
	int i;

	char s[] = {',', ';', '.', ' ', '\t', '\n', '!', '?', '"', '(', ')', '{',
		'}'};
	for (i = 0; i < 13; i++)
	{
		if (c == s[i])
			return (1);
	}
	return (-1);
}

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
		if (is_separator(s[i]) == 1)
		{
			if (s[i] == '\t')
				s[i] = ' ';
			if (is_lower(s[i + 1]) == 1)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
