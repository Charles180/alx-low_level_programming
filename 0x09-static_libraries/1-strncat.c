#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *
  *@n: number of bytes used
  *
  *@dest: destination
  *
  *@src: source
  *
  *Return: destination which is concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
