#include <stdio.h>
#include "main.h"
/**
 * is_prime - function
 * @n: number
 * @d: divisor number
 * Return: number
 */
int is_prime(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d * d > n)
		return (1);
	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - function
 * @n: inpunt number
 * Return: number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
