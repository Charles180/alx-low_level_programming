#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - function that copies string from src to dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
