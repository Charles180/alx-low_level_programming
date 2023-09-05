#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *argstostr - The function that concatenates all arguments of a program
  *
  *@ac: 1st int parameter
  *
  *@av: 2nd pointer to pointer parameter
  *
  *Return: if ac = 0 return null else if av=NULL
  */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len;
	char *str;

	i = j = k = 0;
	len = 1;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len += 1;
		len += 1;
	}
	str = malloc(sizeof(char) * len);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	if (str != NULL)
		return (str);
	else
		return (NULL);
}
