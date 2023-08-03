#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint -function that converts binary to int
 * @b: binary string
 * Return: 0 or the convertet number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int k = 1;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	for (i = len; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			result += k;
		}
		k *= 2;
	}

	return (result);
}
