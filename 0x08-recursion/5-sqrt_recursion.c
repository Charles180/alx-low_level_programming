#include "main.h"
/**
 * sqrt_find - The function initially checks the square root of a num.
 *
 * @a: The initial guess of the root
 *
 * @s: The number for which square root is needed
 *
 * Return: square root of s or -1 for no natural roots found.
 */

int sqrt_find(int a, int s)
{
	if (a * a == s)
		return (a);
	if (a * a > s)
		return (-1);
	return (sqrt_find(a + 1, s));
}

/**
  *_sqrt_recursion - The function that returns the natural square root.
  *
  *@n: The number to find natural square root
  *
  *Return: natural square root or -1(if not natural square root)
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
