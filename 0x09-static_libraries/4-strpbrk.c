#include "main.h"
#include <string.h>
/**
 * _strpbrk - Locates the first occurrence in the string s of any of the bytes in the string accept
 * @s: Input string
 * @accept: Input string
 * returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
