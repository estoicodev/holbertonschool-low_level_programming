#include "main.h"

/**
 * free_grid - desc
 * @grid: desc
 * @height: desc
 *
 * Return: void.
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
