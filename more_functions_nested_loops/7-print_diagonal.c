#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function to draw a diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <  n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
