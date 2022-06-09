#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
