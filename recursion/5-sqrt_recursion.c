#include <stdio.h>
#include "main.h"
/**
 * sqrt_rec - function to return natural square root of number
 * @n: number
 * @r: root
 * Return: square number
 */
int sqrt_rec(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);

	else
		return (sqrt_rec(n, r + 1));
}
/**
 * _sqrt_recursion - function
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	else
		return (sqrt_rec(n, 0));
}
