#include "function_pointers.h"
/**
  * print_name - function that prints name
  *
  * @name: The name that is to printed
  *
  * @f: A pointer to function that prints name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
