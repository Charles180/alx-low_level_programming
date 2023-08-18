#include <stdio.h>
/**
 * main - prints largest prime numbers
 *
 * Return: 0
 */
int main(void)
{
	long prime = 612852475143;
	long divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
