#include "main.h"
/**
  * factorial - calculate factorial of a number
  *
  *@n: Integer to find factorial
  *
  * Return: -1 if int = 0 else return factorial
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
