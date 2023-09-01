#include "main.h"
/**
 * is_numerical -function to  check if it is a digit
 *
 * @k: The digit
 *
 * Return: 1 if digit, else 0
 */
int is_numerical(unsigned int k)
{
return (k >= '0' &&  k <= '9');
}

/**
 * _atoi - function to convert a string to an integer
 *
 *@s: The string
 *
 * Return: Return the num
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;

sign = 1;
number = 0;



for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
number = (s[i] - 48) + number * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}

}

return (number *sign);


}
