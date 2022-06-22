#include "main.h"
/**
 * *_pow_recursion - returns value of x to power of y
 * @x: integer to be apllied power
 * @y: integer that is raised as power
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
