#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: where memory is copied to
 * @src: where the memory is copied from
 * @n: number of bytes of memory
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
