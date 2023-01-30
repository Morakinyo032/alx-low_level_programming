#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cwchar(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '*')
			return (1);
	}
	return (-1);
}

int iswildchar(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '*')
			count += 1;
	}
	if (count == 1)
		return (1);
	return (-1);
}

int wildcmp(char *s1, char *s2)
{
	int i, len1, len2, j;

	j = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (cwchar(s2) == -1)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s2[i] != s1[i])
				return (0);
		}
		return (1);
	}
	else
	{
		if (iswildchar(s2) == -1)
		{
			for (i = 0; s2[i] != '\0'; i++)
			{
				if (s2[i] == '*')
				{
					continue;
				}
				else
				{
					if (s2[i] != s1[j])
						return (0);
					j += 1;
				}
			}
			return (1);
		}
		else
		{
			for (i = 0; s2[i] != '*'; i++)
			{
				if (s2[i] != s1[i])
					return (0);
			}
			j = len1 - 1;
			for (i = len2 - 1; s2[i] != '*'; i--)
			{
				if (s2[i] != s1[j])
					return (0);
				j -= 1;
			}
			return (1);
		}
	}
}
