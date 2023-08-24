#include "main.h"
/**
  * reverse_array - function that reverses an array
  *
  * @a: array that will be reversed.
  *
  * @n: array elements
  */
void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	index = 0;
	tmp =  0;
	n -= 1;

	while (index <= n)
	{
		tmp = a[n];
		a[n--] = a[index];
		a[index++] = tmp;
	}
}
