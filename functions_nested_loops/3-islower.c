#include "main.h"
/**
 * _islower - is a function that checks lowercase character
 * @c: is a character
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
