#include "main.h"

/**
 * alloc_grid - function that return a pointer to a 2 dim
 * @width: int
 * @height: int
 * Return: not void
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	p = malloc(sizeof(*p) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(**p) * width);

			if (p[i] == 0)
			{
				for (j = 0; i > j; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

