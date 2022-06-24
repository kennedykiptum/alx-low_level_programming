#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * atoi - convers string to integer
 * main - adds positive numberis
 * @i: integer to be added
 * @sum: total of args
 * @argv: holds args passed
 * @argc: counts numbe of args passed
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		/**if (argv[i] > '9' || argv[i] < '0')
			printf("Error\n");
		return (1);*/
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
