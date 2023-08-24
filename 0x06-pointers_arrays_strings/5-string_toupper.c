#include "main.h"
#include <string.h>
/**
  * string_toupper -functions that converts lower to uppercase
  *
  *@str: The string
  *
  *Return: The pointer to the string
  */
char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
			*(str + count) = *(str + count) - 32;
		count++;
	}

	return (str);
}
