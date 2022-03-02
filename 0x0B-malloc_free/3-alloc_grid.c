#include "main.h"

/**
 * alloc_grid - desc
 * @width: desc
 * @height: desc
 *
 * Return: Integer.
 */

int **alloc_grid(int width, int height)
{
	int i, j, n, m;
	int **array_2d;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = malloc(sizeof(int *) * height);

	if (array_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int) * width);

		if (array_2d[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(array_2d[j]);
			}

			free(array_2d);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			array_2d[n][m] = 0;
		}
	}

	return (array_2d);
}
