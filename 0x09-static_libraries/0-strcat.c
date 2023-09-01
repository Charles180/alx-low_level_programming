#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @src: source
 * @dest: destination
 * Return: return the destination
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
