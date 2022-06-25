#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string containing bytes
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}