#include "main.h"
/**
 * _strlen - function to return the length ofa string
 * @s:pointer to a char
 * Return: number
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
