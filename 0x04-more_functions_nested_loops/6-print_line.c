#include "main.h"
#include <stdio.h>
/**
 * print_line - draw line on terminal
 * @n: times
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
