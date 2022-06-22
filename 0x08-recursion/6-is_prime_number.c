#include "main.h"
int det_prime_number(int n, int a);
/**
 * is_prime_number - returns prime nu,ber
 * @n: number ckeckde
 * Return: return prime value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (det_prime_number(n, n - 1));
}
/**
 * det_prime_number - calculates if number is prime
 * @n: number to evaluate
 * @a: to be added on increemnt
 * Return: return 1 if prime else 0
 */
int det_prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (det_prime_number(n, a - 1));
}
