#include <stdlib.h>

/**
* free_grid - Frees a 2D array of integers
* @grid: The 2D array to be freed
* @height: Number of rows in the array
*
* Return: Nothing (void)
*/
void free_grid(int **grid, int height)
{
	int i;

		if (grid == NULL || height <= 0)
		return;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
}

