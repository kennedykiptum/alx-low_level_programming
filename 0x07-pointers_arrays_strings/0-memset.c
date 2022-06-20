#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: value to be set
 * @n: number of bytes
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n; a++)
	{
		s[a] = b;
	}
	return (s);
}
