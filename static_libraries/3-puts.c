#include "main.h"
/**
 * _puts - function to print a string followed by new line
 * @str: pointer to character
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
		_putchar(*str);
	_putchar('\n');
}
