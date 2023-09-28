#include "main.h"
/**
  *get_endianness - Function that checks the endianness.
  *
  *Return: O if big endian and 1 if lttle-endian.
  */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
