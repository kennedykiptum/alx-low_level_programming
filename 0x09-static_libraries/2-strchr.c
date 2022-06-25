#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates character in string
 * @s: string to be checked
 * @c: character to be found
 * Return: a pointe upon first occurrence of char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
