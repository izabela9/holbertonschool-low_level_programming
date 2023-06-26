#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: pointer to a char
 */
void rev_string(char *s)
{
	int start, end, len, tmp;

	len = 0;
	while (s[len] != '\0')
		len++;

	start = 0;
	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
