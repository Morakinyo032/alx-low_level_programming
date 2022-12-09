#include "main.h"
#include <string.h>
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with a constant byte b
 * @s: Variable containing the memory address
 * @b: Variable containing the value to be filled in s
 * @n: size of bytes to be filled in
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
