#include "main.h"
#include <stdio.h>
/** 
 * int _isupper - function that checks for uppercase character
 * @c: integer
 * Return: 1 if uppercase
 * Return: 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
