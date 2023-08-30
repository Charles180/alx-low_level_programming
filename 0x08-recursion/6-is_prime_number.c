#include "main.h"
/**
  *if_prime - check whether num is prime
  *
  *@divisor: The value used as checker
  *
  *@num: number to be checked
  *
  *Return: 1 if prime, else 0
  */
int if_prime(int divisor, int num)
{
	if (num < 2 || num % divisor == 0)
		return (0);
	else if (divisor > num / 2)
		return (1);
	else
		return (if_prime(divisor + 1, num));
}


/**
  * is_prime_number - The function that checks for prime in main
  *
  *@n: number to check
  *
  *Return: 1 if prime, else 0
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (if_prime(2, n));
}
