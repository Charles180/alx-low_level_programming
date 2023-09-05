#include "main.h"
#include <stdlib.h>

/**
  *free_grid - frees a 2 dimensional grid.
  *
  *@g: multidimensional array of integers.
  *
  *@h: height of the grid.
  *
  *Return: no return
  */
void free_grid(int **g, int h)
{
	if (g != NULL && h != 0)
	{
		for (; h >= 0; h--)
			free(g[h]);
		free(g);
	}
}
