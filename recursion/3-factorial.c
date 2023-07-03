#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns factorial
 * @n: pointer to an int
 * Return: -1 for error, 1 if number is 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
