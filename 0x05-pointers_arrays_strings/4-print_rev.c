#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - function to print strings followed in reverse
 *
 * @s: Pointer for string to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int k;

	for (k = _strlen(s) - 1; k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
