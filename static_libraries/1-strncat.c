#include "main.h"
#include <stdio.h>
/**
 * _strncat - function to concaterate two strings
 * @dest: pointer to a variable char
 * @src: pointer to a variable char
 * @n: integer
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
