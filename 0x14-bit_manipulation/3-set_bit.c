#include "main.h"
/**
  *set_bit - Function that bit value to 1 for a given index.
  *
  *@n: bit pointer
  *
  *@index: index starting from 0 for the bit to set.
  *
  *Return: 1 if OK else -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n ^ (1 << index);
	return (1);
}
