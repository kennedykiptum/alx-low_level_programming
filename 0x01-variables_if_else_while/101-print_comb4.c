#include <stdio.h>

/**
 *  main - prints all possible different combinations of two digits
 *  Return: ALways 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 100; n < 1000; n++)
	{
		for (m = 100; m < 1000; m++)
		{
			if (n < m)
			{
				putchar((n / 100) + 48);
				putchar((n % 100) + 48);
				putchar(' ');
				putchar((m / 100) + 48);
				putchar((m % 100) + 48);
				if (n != 998 || m != 999)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

