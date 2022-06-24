#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * _atoi - changes string to integer
 * @argc: intege couuuunt
 * @argv: holds string args
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	/**
	 * _atoi - converts string to integer
	 */
	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
