#include <stdio.h>
/**
  *main - entry function
  *
  *Return: always 0 success
  */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	printf("\n");
	return (0);
}
