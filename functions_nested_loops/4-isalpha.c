#include "main.h"
/**
 * _isalpha - is a function that checks for alphabetic character
 * @c : is a character
 * Return: 1 if is a letter, lowerscase or uppercase , 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
}
else
{
	return (0);
}
}