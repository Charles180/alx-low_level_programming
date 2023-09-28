#include "main.h"
/**
  *clear_bit - Function that sets bit value to 0 at given index.
  *
  *@n: Pointer to bit.
  *
  *@index: Index starting from 0 of the bit to be set
  *
  *Return: 1 if 0K else -1.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
