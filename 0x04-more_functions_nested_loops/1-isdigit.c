#include "main.h"
/**
 * _isdigit - assess for a digit between 0 and 9
 * @c: char to be assessed
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
