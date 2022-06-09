#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * size: is the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
