#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_all - The function that prints anything
  *
  *@format: Arguments passed to the function
  *
  *@...: variable number of arguments
  */
void print_all(const char * const format, ...)
{
	char *p;
	int index = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", (char)va_arg(ptr, int));
				break;
			case 'i':
			  printf("%d", va_arg(ptr, int));
					break;
			case 'f':
				printf("%f", (float)va_arg(ptr, double));
				break;
			case 's':
				p = va_arg(ptr, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;

		}
		if ((format[index] == 'c' || format[index] == 'i' || format[index] == 'f' ||
		     format[index] == 's') && format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n"), va_end(ptr);
}

