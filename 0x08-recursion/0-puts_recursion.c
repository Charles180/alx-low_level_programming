#include "main.h"
/**
  *_puts_recursion - The function that prints a string and a newline
  *
  *@s: The string
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
