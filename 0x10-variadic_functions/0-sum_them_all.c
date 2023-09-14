#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - the function that sums all the paramters
  *
  * @n: The number of parameters to be summed
  *
  * Return: O if n == 0 else sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		sum = sum + va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
