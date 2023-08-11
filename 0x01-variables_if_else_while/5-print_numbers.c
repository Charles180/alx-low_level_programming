#include <stdio.h>
/**
  *main - entry function
  *
  *Return: always 0 success
  */
int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
