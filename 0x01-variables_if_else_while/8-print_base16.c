#include <stdio.h>
/**
  * main - Entry function
  *
  * Return: always 0 success
  */
int main(void)
{
	char alphabet;
	int numbers;

	for (numbers = 0 ; numbers <= 9; numbers++)
		putchar((numbers % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
