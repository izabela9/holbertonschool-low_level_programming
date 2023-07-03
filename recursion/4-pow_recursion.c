#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that returns value of x raised power of y
 * @x: integer
 * @y: integer power
 * Return: -1 if y is lower than 0, else value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
