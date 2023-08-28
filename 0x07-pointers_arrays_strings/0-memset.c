#include "main.h"
#include <stdio.h>
/**
  *_memset - The function that fills memory with a constant number of bytes
  *
  *@str: pointer with the constant byte
  *
  *@c: constant byte
  *
  *@num: number of bytes
  *
  *Return: s
  */
char *_memset(char *str, char c, unsigned int num)
{
	unsigned int i;

	i = 0;
	while (i < num)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
