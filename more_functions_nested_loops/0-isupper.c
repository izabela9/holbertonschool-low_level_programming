#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character
 * @c: integer
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}