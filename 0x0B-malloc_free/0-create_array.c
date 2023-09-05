#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - Function that creates an array of char
  *
  *@size: array size
  *
  *@c: character
  *
  *Return: pointer to array else NULL
  */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (size--)
		p[size] = c;
	return (p);
}
