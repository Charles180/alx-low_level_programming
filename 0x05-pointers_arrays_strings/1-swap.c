#include "main.h"
/**
  * swap_int - function two smap two intergers
  *
  *@a: Pointer to the first integer
  *
  *@b: Pointer for the second integer
  *
  *Return: Nothing
  */
void swap_int(int *a, int *b)
{
	int i, k;

	i = *a;
	k = *b;
	*a = k;
	*b = i;
}
