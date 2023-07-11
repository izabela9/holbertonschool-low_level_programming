#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of int
 * @width: int
 * @height: int
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)mallo(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			free(arr[i]);
	}
	return (arr);
}
