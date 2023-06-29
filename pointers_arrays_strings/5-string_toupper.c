#include <stdio.h>
#include "main.h"
/**
 * string_toupper - function that turns from lowercase to uppercase
 * @str: pointer to a string
 * Return: the string in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
