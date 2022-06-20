#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of square matrix
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int y, z;

	for (x = 0; x < size; x++)
	{
		y += a[(size * x) + x];
		z += a[(size * (x + 1)) - (x + 1)];
	}
	printf("%d, %d\n", y, z);
}
