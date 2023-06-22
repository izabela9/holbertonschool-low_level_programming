#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function to draw a diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
