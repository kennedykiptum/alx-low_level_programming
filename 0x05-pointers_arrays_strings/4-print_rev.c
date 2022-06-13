#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to character to printed
 */
void print_rev(char *s)
{
	int i, j, ur;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	ur = i;

	for (j = ur - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
