#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - The function that prints nums, followed by \n.
  *
  *@separator: The string to be printed between numbers.
  *
  *@n: The number of integers
  *
  *@...: A variable number of numbers to be printed.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);

	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
