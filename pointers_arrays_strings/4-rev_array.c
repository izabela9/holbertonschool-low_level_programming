#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function to reverse the content of an array
 * @a: pointer to an integer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
