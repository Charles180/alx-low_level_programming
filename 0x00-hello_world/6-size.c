#include <stdio.h>
/**
  *main- Entry point
  *
  *Size of operators in C
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
