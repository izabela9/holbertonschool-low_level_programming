#include "main.h"
#include <stdio.h>
/**
 * print_line - function to draw a straight line
 * @n: integer
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
