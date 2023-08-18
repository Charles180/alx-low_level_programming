#include <stdio.h>
#include <stdlib.h>
/**
 * main - Fizz Buzz code
 *
 * Return: always 0 success
 */

int main(void)
{
	int c = 1;

	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", c);
		}
		if (c != 100)
		{
			putchar(' ');
		}

		c++;
	}
	putchar('\n');
	return (0);
}
