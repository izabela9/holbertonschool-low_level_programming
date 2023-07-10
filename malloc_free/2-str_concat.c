#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2);
	concat = malloc((len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcpy(concat, s2);
	return (concat);
}
