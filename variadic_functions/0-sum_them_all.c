#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all paramenters
 * @n: number of parameters
 * Return: 0 if n == 0 or sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum_all = 0;
	unsigned int i;
	va_list args;

	var_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum_all += va_arg(args, int);
	}
	return (sum_all);
}
