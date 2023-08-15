#include "main.h"
/**
  *print_alphabet - print alphabet in lower case
  *
  *Return: Always 0
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
