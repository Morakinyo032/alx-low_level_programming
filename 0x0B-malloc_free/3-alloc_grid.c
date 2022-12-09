#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a two dimensional array of ints
 * @width: size of column
 * @height: size of row
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (; i >= 0; i--)
				free(t[i]);
			free(t);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
