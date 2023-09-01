#include <stdio.h>
#include <stdlib.h>

/**
  *main - Product of two nums
  *
  *@argc: argument count
  *
  *@argv: argument vector
  *
  *Return: 0 for 2 arguments, 1 if not 2 arguments.
 */

int main(int argc, char **argv)
{
	int product;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
