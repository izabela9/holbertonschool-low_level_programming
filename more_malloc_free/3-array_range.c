#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *array_range - function that creates an array of integers
 *@min: min value
 *@max: max value
 *Return: the pointer to the newly create array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int len = (max - min + 1);

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
