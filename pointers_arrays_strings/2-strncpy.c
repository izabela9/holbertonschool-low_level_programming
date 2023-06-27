#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: pointer to a variable char
 * @src: pointer to a variable char
 * @n: integer
 * Return: string in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
