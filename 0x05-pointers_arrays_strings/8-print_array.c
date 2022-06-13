#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed bynnew line
 * @a: array to be printed
 * @n: number o fleementd
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
			printf("%d", a[j]);
		else
			printf(", %d", a[j]);
	}
		printf("\n");
}

