#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * @array: given array to iterate
 * @size: size of the array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
