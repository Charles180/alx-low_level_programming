#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - Function that prints half of a string
 *
 * @str: the pointer to the string to be half printed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int k, i, length;

	length = _strlen(str);
	if ((length % 2) == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}
	for (k = i; k < length; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
