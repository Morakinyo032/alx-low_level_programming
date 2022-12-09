#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks for digit from 0 through 9
 * @c: Digit to check
 *
 * Return: 1 if c is digit
 * 0 if c is not
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
