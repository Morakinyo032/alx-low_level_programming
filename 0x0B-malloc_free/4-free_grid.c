#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2 dimensional grid
 * @grid: pointer to grid
 * @height: grid's height
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
