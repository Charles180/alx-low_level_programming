#include "main.h"
#include <string.h>
/**
  *_strspn - A function that gets the length of prefix substring
  *
  *@str: string to get length
  *
  *@accept: The number of bytes accepted
  *
  *Return: return the unsigned value.
  */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int i;

	i = strspn(str, accept);
	return (i);
}
