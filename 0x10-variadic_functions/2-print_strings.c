#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - Function that prints strings, followed by a new line.
  *
  *@separator: The string to be printed between strings.
  *
  *@n: The number of strings.
  *
  *@...: A variable number of strings
  *
  *Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *s;
	unsigned int i = 0;

	va_start(ptr, n);

	while (i < n)
	{
		s = va_arg(ptr, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(ptr);
}
