#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *
  *@w: width of the array.
  *
  *@h: height of the array.
  *
  *Return: pointer of an array of integers
  */
int **alloc_grid(int w, int h)
{
	int **gridout;
	int a, b;

	if (w < 1 || h < 1)
		return (NULL);

	gridout = malloc(h * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (a = 0; a < h; a++)
	{
		gridout[a] = malloc(w * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}

	for (a = 0; a < h; a++)
		for (b = 0; b < w; b++)
			gridout[a][b] = 0;

	return (gridout);
}
