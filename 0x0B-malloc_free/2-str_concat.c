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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	conc = malloc(strlen(s1) + strlen(s2) + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
