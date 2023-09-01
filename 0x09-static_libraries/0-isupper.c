#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: char to be assessed
 * Return: 1 if upper case, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
