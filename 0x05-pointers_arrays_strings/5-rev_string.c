#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s: The pointer to the string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int k, length, temp;

	length = strlen(s);
	for (k = 0; k < length / 2; k++)
	{
		temp = s[k];
		s[k] = s[length - k - 1];
		s[length - k - 1] = temp;
	}
}
