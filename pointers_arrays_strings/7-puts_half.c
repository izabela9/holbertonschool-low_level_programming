#include "main.h"
/**
 * puts_half - function to print half of the string
 * @str: pointer to a character
 */
void puts_half(char *str)
{
	int l = 0;
	int j;

	while (str[l] != '\0')
	{
		l++;
	}
	for (j = (l + 1) / 2; j < l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
