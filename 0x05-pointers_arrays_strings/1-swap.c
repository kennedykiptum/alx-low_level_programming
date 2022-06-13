#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first number
 * @b: pointer t second number
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
