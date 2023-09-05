#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup - The function to return the required pointer
  *
  *@s: The string
  *
  *Return: Null if *s is NULL
  */
char *_strdup(char *s)
{
	int i, size;
	char *a;

	if (s == NULL)
	{
		return (NULL);
	}
	for (size = 0; s[size] != '\0'; size++)
	{
		a = malloc(size * sizeof(*s) + 1);
		if (a == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= size; i++)
			{
				a[i] = s[i];
			}
		}
	}
	return (a);
}
