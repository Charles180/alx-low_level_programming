#include "main.h"
/**
 * flip_bits - Counter for bits to be flipped.
 *
 * @n: unsigned number
 *
 * @m: unsigned number to flip n.
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compliment = n ^ m, b = 0;

	while (compliment > 0)
	{
		b = b + (compliment & 1);
		compliment >>= 1;
	}
	return (b);
}
