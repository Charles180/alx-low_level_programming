#include "main.h"
/**
  *print_alphabet_x10 - prints lower case alpabets 10 times
  *
  *Return: void
  */
void print_alphabet_x10(void)
{
	char s;
	int x;

	x = 0;
	while (x <= 9)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
		x++;
	}
}
