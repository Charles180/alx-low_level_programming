#include "search_algos.h"

/**
  * linear_search - Searches for a val in an array
  *                 of ints using linear search.
  * @array: A pointer to the first element of the search array.
  * @size: Array elements.
  * @value: Search value.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}