#include "main.h"
/**
  *_strlen - functions that returns length of a string
  *
  *@s: point to the string to be returned
  *
  *Return: Length of string
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
