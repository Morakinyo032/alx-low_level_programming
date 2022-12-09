#include "main.h"
#include <stdlib.h>
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++)
		s[i]  b;
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: Size of each element in the array
 * Return: Pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * sizeof(void *));
	if (s == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (s);
}
