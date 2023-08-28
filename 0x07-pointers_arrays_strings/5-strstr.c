#include "main.h"
#include <string.h>
/**
  *_strstr - function that locates a substring
  *
  *@haystack: The string to be checked
  *
  *@needle: comparison string
  *
  *Return: p
  */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
