#include "main.h"
/**
 * _puts - function to print strings followed by a new line
 *
 * @str: Pointer for string to be printed
 *
 * Return: String
 */
void _puts(char *str)
{
	int k;

	for (k = 0; *(str + k) != '\0'; k++)
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}
