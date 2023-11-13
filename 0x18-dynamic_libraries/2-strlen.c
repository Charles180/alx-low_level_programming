#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to pass this function
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
