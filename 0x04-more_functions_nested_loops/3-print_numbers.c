#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: always 0 success
 */
void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
}
