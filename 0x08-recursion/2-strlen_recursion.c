#include "main.h"
#include <string.h>
/**
  *_strlen_recursion - function that returns length of a string
  *
  *@s: The string
  *
  * Return: Length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
