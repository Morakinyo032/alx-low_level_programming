#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: numbers of arguments passed
 * @av: pointer to arguments passed
 * Return: pointer..
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, l;
	char *t;

	l = 0;
	c = 0;
	if (av == NULL || ac == 0)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
	{
		l += strlen(av[i]) + 1;
	}
	t = malloc(l);
	if (t == NULL)
		return(NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			t[c] = av[i][j];
			c++;
		}
		t[c] = '\n';
		c++;
	}
	t[c] = '\0';
	return (t);
}
