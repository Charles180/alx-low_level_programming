#include "main.h"
#include <stdlib.h>
/**
  *_realloc - The function reallocates a memory block.
  *
  *@ptr: pointer to the memory previously allocated.
  *
  *@old_size: Old size
  *
  *@new_size: New size
  *
  *Return:Null if fail else pointer.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
