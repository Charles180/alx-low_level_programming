#include "main.h"
#include <string.h>
/**
  *_strcmp - function that compares two strings
  *
  * @str1: string 1
  *
  * @str2: string 2
  *
  * Return: -ve if (str1 < str2), 0 if (str1 == str2), & +ve if (str1 > str2)
  */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
