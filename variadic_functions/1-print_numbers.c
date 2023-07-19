#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that print numbers
 * @seperator: string to be printed between numbers
 * @n: number of parameters
 * Return: sum of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		printf("%d", va_arg(args, int));
	}
	printf("\n");
}
