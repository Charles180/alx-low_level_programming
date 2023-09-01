#include "main.h"
#include <string.h>
/**
  *_memcpy - The function that copies a block of memory
  *
  *@dest: Destination
  *
  *@src: source
  *
  *@n: The number of char to copy
  *
  *Return: Returns destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
