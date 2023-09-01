#include "main.h"
/**
  *_islower- check if a character is lower case
  *
  *@s: checked character
  *
  * Return: 1 if yes, else 0
  */
int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
