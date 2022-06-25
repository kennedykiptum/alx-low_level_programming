#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: string to append to
 * @src: string to be appended
 * @m: number of bytes of str to concatenate
 * Return: a pointer to to the string
 */
char *_strncat(char *dest, char *src, int m)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < m)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	return (dest);
}
