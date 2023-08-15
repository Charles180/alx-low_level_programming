#include "main.h"
/**
  *_isalpha -checks for an alphabet
  *
  *@s: character to be checked
  *
  *Return: 1 if yes, else 0
  */
int _isalpha(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
