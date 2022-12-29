#include "main.h"
#include <string.h>

/**
 * substrcmp - Check if a string is a substring of the other
 * @str: Pointer to the parent string
 * @substr: Pointer to the substring
 * Return: 1 if substr is contained in str, -1 otherwise
 */
int substrcmp(char *str, char *substr)
{
	int i, j;

	j = 0;
	for (i = 0; substr[i] != '\0'; i++)
	{
		if (substr[i] != str[j])
			return (-1);
		j++;
	}
	return (1);
}
/**
 * _strstr - finds the first occurrence of string needle in the str haystack
 * @haystack: input string
 * @needle: input string
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (substrcmp(&haystack[i], needle) == 1)
			return (&haystack[i]);
	}
	return (NULL);
}
