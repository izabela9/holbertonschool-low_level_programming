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
	char *concat_n;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat_n = malloc(len1 + len2 + 1);
	if (concat_n == NULL)
	{
		return (NULL);
	}
	strcpy(concat_n, s1);
	strcat(concat_n, s2);
	return (concat_n);
}
