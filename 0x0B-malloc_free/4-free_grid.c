#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid:two dimensional grid
 * @height:height
 * Return:nothing
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0 ; c < height ; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
