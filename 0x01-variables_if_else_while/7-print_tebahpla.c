#include <stdio.h>
/**
  * main -Entry function
  *
  * Return: always 0 (success)
  */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
