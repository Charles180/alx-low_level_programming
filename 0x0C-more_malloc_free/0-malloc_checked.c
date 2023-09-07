#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - The function that allocates memory using malloc
  *
  *@i: memory bytes to be allocated
  *
  *Return: Allocated mem pointer else exit normal with 98
 */

void *malloc_checked(unsigned int i)
{
	void *pointer;

	pointer = malloc(i);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
