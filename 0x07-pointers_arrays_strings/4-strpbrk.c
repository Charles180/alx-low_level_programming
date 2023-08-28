#include "main.h"
#include <string.h>
/**
  *_strpbrk - The function that Locates characters in a string
  *
  *@str: str to check
  *
  *@accept: String with char to match
  *
  *Return: matching pointer
 */
char *_strpbrk(char *str, char *accept)
{
	char *ret;

	ret = strpbrk(str, accept);
	return (ret);
}
