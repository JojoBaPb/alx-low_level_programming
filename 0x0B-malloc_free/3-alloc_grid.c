#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 * Return: NULL if fail otherwise
 */
int **alloc_grid(int width, int height)
{
	int **xy;
	int y, z;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	xy = malloc(sizeof(int *) * height);

	if (xy == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		xy[y] = malloc(sizeof(int) * width);
		if (xy[y] == NULL)
		{
			for (y = y - 1; y >= 0; y--)
			{
				free(xy[y]);
			}
			free(xy);
			return (NULL);
		}
	}
	for (y = 0; z < width; z++)
		xy[y][z] = 0;
	return (xy);
}

