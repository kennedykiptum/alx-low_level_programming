#include "main.h"
/**
 * _strncpy - concatenates n bytes from a string to another
 * @dest: string to append to
 * @src: string to be appended
 * @m: number of bytes of str to concatenate
 * Return: a pointer to to the string
 */
char *_strncpy(char *dest, char *src, int m)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < m)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < m)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
