#include <stdio.h>
/**
  *main - entry function
  *
  *Return: always 0 success
  */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 8; number1++)
	{
		for (number2 = number1 + 1; number2 <= 9; number2++)
		{
			putchar(number1 + '0');
			putchar(number2 + '0');
			if (number1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
