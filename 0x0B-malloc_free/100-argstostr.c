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
	int i, c, l;
	char **t;

	l = strlen(av[i]);
	if (av == NULL || ac == 0)
		return (NULL);
	t = malloc(ac * sizeof(char *));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		t[i] = malloc(l + 1);
		if (t[i] == NULL)
		{
			for (; i >= 0; i--)
				free(t[i]);
			free(t);
			return(NULL);
		}
		for (c = 0; c < l; c++)
			t[i][c] = av[i][c];
	}
	return (t);

}
