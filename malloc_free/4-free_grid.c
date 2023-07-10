#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* free_grid - returns a pointer to a 2 dimensional array
*@grid: width of the array
*@height: height of the array
*/
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
