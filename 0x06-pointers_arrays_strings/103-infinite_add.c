#include "main.h"
#include <stdio.h>
/**
  *infinite_add - function that adds two numbers
  *
  *@num1: number one.
  *
  *@num2: number two.
  *
  *@b: buffer that the function will use to store the result.
  *
  *@size_b: buffer size
  *
  *Return: destination pointer
  */

char *infinite_add(char *num1, char *num2, char *b, int size_b)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(num1 + c1) != '\0')
		c1++;
	while (*(num2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_b <= bg + 1)
		return (0);
	b[bg + 1] = '\0';
	c1--, c2--, size_b--;
	dr1 = *(num1 + c1) - 48, dr2 = *(num2 + c2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(b + bg) = (op % 10) + 48;
		else
			*(b + bg) = '0';
		if (c1 > 0)
			c1--, dr1 = *(num1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(num2 + c2) - 48;
		else
			dr2 = 0;
		bg--, size_b--;
	}
	if (*(b) == '0')
		return (b + 1);
	else
		return (b);
}
