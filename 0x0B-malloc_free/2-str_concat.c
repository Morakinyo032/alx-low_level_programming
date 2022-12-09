#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Cncatenates two strings
 * @s1: pointer to first arg
 * @s2: pointer to second arg
 * Return: NULL upon failure or pointer upon success
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, j;
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int size = size1 + size2 + 1;

	conc = malloc(size);
	if (conc == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		conc[size1 + j] = s2[j];
	}
	conc[size + j] = '\0';
	return (conc);
}
