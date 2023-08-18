#include "main.h"
#include <stdio.h>
/**
 * print_triangle - draws a triangle on terminal
 * @size: size
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
			{
				putchar(' ');
			}
			for (z = 0; z < x; z++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
