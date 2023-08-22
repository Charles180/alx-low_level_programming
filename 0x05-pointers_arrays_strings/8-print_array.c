#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - function that prints elements of an array
 *
 * @a: Point to array
 *
 *@i: Number of array elements
 *
 */
void print_array(int *a, int i)
{
	int k;

	for (k = 0; k < i; k++)
	{
		printf("%d", a[k]);
		if (k != i - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
