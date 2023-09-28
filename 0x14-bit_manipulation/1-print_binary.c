#include "main.h"
/**
  *print_binary - The function that prints binary rep of a num
  *
  *@n: usigned long integer
  *
  *Return: Binary rep
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
