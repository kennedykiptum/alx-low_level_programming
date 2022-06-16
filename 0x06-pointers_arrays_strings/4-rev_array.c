#include "main.h"
/**
 * reverse_array - reverses an array of integer
 * @a: array to be reversed
 * @n: element in aray
 */
void reverse_array(int *a, int n)
{
	int b, c, t;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		t = a[b];
		a[b] = a[c];
		a[c--] = t;
	}
}
