#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - frees a 2d array
* @grid: array
* @height: height
* Description: frees 2d array
*/

void free_grid(int **grid, int height)
{

	while (--height >= 0)
		free(grid[height]);

	free(grid);

}



