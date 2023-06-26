#include "main.h"
/**
 * swap_int - function to swap the values
 * @a: pointer to an intiger
 * @b: pointer to an intiger
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
