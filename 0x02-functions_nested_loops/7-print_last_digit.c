#include "main.h"
/**
  * print_last_digit - prints last digit of int
  *@k: number to check
  *Return: int last digit
  */
int print_last_digit(int k)
{
	int digit;

	digit = k % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
