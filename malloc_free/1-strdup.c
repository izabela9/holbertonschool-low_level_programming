#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function
 * @str: pointer to character
 * Return: pointer ,else NULL
 */
char *_strdup(char *str)
{
	char *dublicate;

	if (str == NULL)
		return (NULL);
	dublicate = malloc((strlen(str) + 1) * sizeof(char));
	if (dublicate == NULL)
		return (NULL);
	strcpy(dublicate, str);
	return (dublicate);
}
