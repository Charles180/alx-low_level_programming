#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup - The function to return the required pointer
  *
  *@str: The string
  *
  *Return: Null if *s is NULL
  */
char *_strdup(char *str)
{
	char *duplicate;

	duplicate = malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
