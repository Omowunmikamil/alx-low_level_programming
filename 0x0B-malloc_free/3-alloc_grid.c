#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: size of int
 * @height: size of int
 * Return: NULL if width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(**grid) * width);
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
