#include "main.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string
 * @s: Input string
 * @c: character to be looked for
 * Return: a pointer to the first occurrence the character in the string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
