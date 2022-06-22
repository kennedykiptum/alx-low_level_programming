#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: integer to be factorialed
 * Return: return factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
