#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - function that prints char's of string
 *
 * @str: Pointer to the string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int k;

	for (k = 0; k < _strlen(str); k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
