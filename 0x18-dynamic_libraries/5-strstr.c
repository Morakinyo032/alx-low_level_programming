#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurrence of string needle in the string haystack
 * @haystack: input string
 * @needle: input string
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
