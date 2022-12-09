#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to string to check
 * Return: 1, if true and 0 otherwise
 */
int pal(char *d, int a);
int is_palindrome(char *s)
{
	if (strlen(s) == 0)
		return (1);
	return (pal(s, 0));
}
/**
 * pal - checks if a string is a palindrome
 * @d: Pointer to string to check
 * @a: int input
 * Return: 1, if true and 0 otherwise
 */
int pal(char *d, int a)
{
	int b;

	if (*d > '\0')
	{
		b = strlen(d) - a - 1;

		if (d[a] == d[b])
			pal(d, a + 1);

		else
			return (0);
	}

	return (1);
}
