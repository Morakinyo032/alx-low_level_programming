#include <stdio.h>
#include <string.h>
#include "main.h"

int is_palindrome(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
