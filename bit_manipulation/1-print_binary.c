#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int b;

	if (n > 1)
		print_binary(n / 2);
	b = n % 2;
	printf("%d", b);
	return;
}
