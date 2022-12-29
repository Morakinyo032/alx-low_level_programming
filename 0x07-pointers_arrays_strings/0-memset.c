#include "main.h"
#include <string.h>
/**
 * _memset - Fills the first n bytes of a memory area with const byte
 * @s: Variable containing the memory address
 * @b: Variable containing the value to be filled in s
 * @n: size of bytes to be filled in
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		s[i] = b;
	}
	return (s);
}
