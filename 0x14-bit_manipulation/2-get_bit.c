#include "main.h"
/**
  *get_bit - Function taht gets the value of a bit at a given index.
  *
  *@n: bit num
  *
  *@index: The index starting from 0 for the bit to get
  *
  *Return: Otherwise - The value of bit at index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
