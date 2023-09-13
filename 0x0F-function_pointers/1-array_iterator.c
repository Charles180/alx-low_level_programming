#include "function_pointers.h"
/**
  *array_iterator - function that executes a function given as parameter
  *
  *@array: pointer array
  *
  *@size: size of array
  *
  *@action: pointer to the executed function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (action == NULL || array == NULL || size == 0)
		return;

	do {
		action(array[i]);
		i++;
	} while (i < size);
}
