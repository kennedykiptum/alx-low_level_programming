#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string whose lenght is to be det
 * Return: return 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
