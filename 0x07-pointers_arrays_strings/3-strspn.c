#include "main.h"
#include <stdio.h>
/**
 * *_strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: string containing value to be searched
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, num;

	for (x = 0 ; s[x] != '\0'; x++)
	{
		num = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				num = 1;
			}
		}
		if (num == 0)
		{
			return (z);
		}
	}
	return (0);
}
