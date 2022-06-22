#include "main.h"

int natural_sqrt_recursion(int n, int a);
/**
 * *_sqrt_recursion - returns natural square root
 * @n: number checked
 * Return: returns the squared root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}
/**
 * natural_sqrt_recursion - finds natural sqrt
 * @n: number to calculate
 * @a: to increment
 * Return: natural square root
 */
int natural_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (natural_sqrt_recursion(n, a + 1));
}
