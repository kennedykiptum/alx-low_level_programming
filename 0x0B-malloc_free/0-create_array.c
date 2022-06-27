#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes
 * with specific char
 * @size: number of bytes to allocate
 * @c: char to initialize
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
