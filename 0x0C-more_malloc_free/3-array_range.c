#include "main.h"
#include <stdlib.h>
/**
  *array_range - Fuction that creates an array of integers
  *
  *@min: First array element
  *
  *@max: Last array element
  *
  *Return: Null if If min > max or the function fails else pointer.
  */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int s;

	i = 0;
	if (min > max)
		return (NULL);

	s = max - min + 1;

	array = malloc(sizeof(int) * s);

	if (array == NULL)
		return (NULL);

	do {
		array[i] = min++;
		i++;
	} while (i < s);
	return (array);
}
