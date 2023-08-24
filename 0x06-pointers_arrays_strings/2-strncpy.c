#include "main.h"
/**
  *_strncpy - function that copies a string
  *
  * @dest: destination of the string
  *
  * @src: source of the string
  *
  * @n: The bytes from the src
  *
  * Return: the pointer to dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for ( ; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
