#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of second string
 * Return: if it fails NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int) strlen(s2))
		n = strlen(s2);
	result = malloc(strlen(s1) + n + 1);
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	memcpy(result, s1, strlen(s1));
	memcpy(result + strlen(s1), s2, n);
	result[strlen(s1) + n] = '\0';
	return (result);
}
