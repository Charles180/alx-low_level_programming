#include "main.h"
/**
  * print_sign - checks sign
  * @n: the integer to be checked
  *Return: 1 when greater than 0, 0 when zero, and -1 when <0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
