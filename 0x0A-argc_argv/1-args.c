#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: intege couuuunt
 * @argv: holds string args
 * Return: returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc < 0)
		printf("%d\n", argc);
	return (0);
}
