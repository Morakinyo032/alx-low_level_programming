#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: 0
 */
int digitchk(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (-1);
}
int _atoi(char *s)
{
	int sign, num, i;
	sign = 1;
	num = 0;
	if (!s)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (digitchk(s[i]) == -1)
		{
			if (s[i] == '-')
				sign *= -1;
			continue;
		}
		num += (s[i] - '0');
		if (digitchk(s[i + 1]) != 1)
			break;
		num *= 10;
	}
	if (sign != 1)
		return (-num);
	return (num);
}
