#include "main.h"

/**
 * _strncpy - Copies a number of bytes from string src into dest
 * @dest: the string to copy
 * @src: The source string.
 * @n: number of bytes to copied from src.
 *
 * Return: pointer to final result  string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int array = 0, src_cnt = 0;

	while (src[array++])
	{
		src_cnt++;
	}

	for (array = 0; src[array] && array < n; array++)
	{
		dest[array] = src[array];
	}

	for (array = src_cnt; array < n; array++)
	{
		dest[array] = '\0';
	}

	return (dest);
}
