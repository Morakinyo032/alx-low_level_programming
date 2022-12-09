#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks for upper case character
 * @c: Character to check
 *
 * Return: 1 if c is uppercase
 * 0 if c is not
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
