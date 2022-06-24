#include "main.h"
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
	int result;

	/**
	 * _atoi - converts string to integer
	 */
	if (argc < 2)
	{
		printf("error\n");
		return (1);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
