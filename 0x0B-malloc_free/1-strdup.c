#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup - The function to return the required pointer
  *
  *@s: The string
  *
  *Return: Pointer else NULL if malloc fails
  */
char *_strdup(char *s)
{
	char *dup;

	dup = malloc(strlen(s) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(dup, s);
	return (dup);
}
