#include "function_pointers.h"

/**
  *int_index - Function that searches for an integer in an int array.
  *
  *@array: The int array
  *
  *@size: The size of the array.
  *
  *@cmp: A pointer to function used to compare values.
  *
  *Return: -1 if If no element matches or size <= 0
  *	else index of 1st element for whoch the cmp function does not return 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
