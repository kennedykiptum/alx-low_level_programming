#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < n; a++ )
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
					putchar('\\');
				else if (b < a)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
