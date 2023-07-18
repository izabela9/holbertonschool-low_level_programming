#include <stdio.h>
/**
 * print_name - function to print a name
 * @name: name variable
 * @f: function callback
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	f(name);
}
