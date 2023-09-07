#include "main.h"
#include <stdlib.h>
/**
  *_calloc - The function that allocates memory for an array.
  *
  *@elements: number of elements.
  *
  *@s: size of bytes.
  *
  *Return: If elements or s = 0, return Null else pointer.
  *
  */
void *_calloc(unsigned int elements, unsigned int s)
{
	char *pointer;
	unsigned int index;

	index = 0;
	if (s == 0 || elements == 0)
		return (NULL);

	pointer = malloc(s * elements);

	if (pointer == NULL)
		return (NULL);

	do {
		pointer[index] = 0;
		index++;
	} while (index < (s * elements));
			return (pointer);
}
