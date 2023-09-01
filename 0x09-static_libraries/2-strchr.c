#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *_strchr - function that locates a char in a string
  *
  *@s: string
  *
  *@c: character
  *
  * Return: The pointer to char in string
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
