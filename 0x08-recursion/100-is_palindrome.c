#include "main.h"
#include <string.h>
/**
 * pal - checks if a string is a palindrome
 * @d: Pointer to string to check
 * @a: int input
 * @b: int input
 * Return: 1, if true and 0 otherwise
 */
int pal(char *d, int a, int b)
{
	if (d[a] == d[b])
	{
		a++;
		b--;
		pal(d, a, b);
	}
	else
		return (0);
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to string to check
 * Return: 1, if true and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len == 0)
		return (1);
	return (pal(s, 0, len - 1));
}


