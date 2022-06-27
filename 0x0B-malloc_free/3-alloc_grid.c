#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success) or NULL (error)
 */
int **alloc_grid(int width, int height)
{
	int **in;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);
	in = (int **) malloc(sizeof(int *) * height);
	if (in == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		in[b] = (int *) malloc(sizeof(int) * width);
		if (in[a] == NULL)
		{
			free(in);
			for (b = 0; b <= a; b++)
				free(in[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			in[a][b] = 0;
		}
	}
	return (in);
}
