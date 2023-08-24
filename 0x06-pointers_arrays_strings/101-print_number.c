#include "main.h"
/**
  * print_number - The function to prints an integer
  *
  *@i: The integer to print
  */

void print_number(int i)
{
	unsigned int number = i;

	if (i < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
