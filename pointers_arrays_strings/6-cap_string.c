#include <stdio.h>
#include "main.h"
/**
 * cap_string - function that capitalizes all words of string
 * @a: pointer to a variable
 * Return: return 1
 */
char *cap_string(char *a)
{
	int i;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	for (i = 1; a[i] != '\0'; i++)
	{
		if (a[i-1] == 32 || a[i-1] == 10 || a[i-1] == 9 || a[i-1] == 46)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] -= 32;
			}
		}
	}
	return (a);
}
