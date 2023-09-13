#include "function_pointers.h"
/**
  *main - Prints the opcodes
  *
  *@argc: Argument count
  *
  *@argv: Argument vector
  *
  *Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int bytes;
	int i;

	i = 0;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		i++;

		if (i == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
