#include <stdio.h>
/**
  *main - print all arguments received
  *
  *@argc: aargument count
  *
  *@argv: argument vector
  *
  *Return: Nothing
  */
int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
