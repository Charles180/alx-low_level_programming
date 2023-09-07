#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - The function that Concatenates the 2 strings
  *
  *@str1: The first string.
  *
  *@str2: The second string.
  *
  *@b: Max num of bytes of string s2 to concatenate to s1.
  *
  * Return: Null if malloc fails else return pointer.
  */
char *string_nconcat(char *str1, char *str2, unsigned int b)
{
	char *concat;
	unsigned int len = b, i;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; str1[i]; i++)
		concat[len++] = str1[i];

	for (i = 0; str2[i] && i < b; i++)
		concat[len++] = str2[i];

	concat[len] = '\0';

	return (concat);
}
