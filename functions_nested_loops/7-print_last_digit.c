#include "main.h"
/**
 * print_last_digit - it takes an argument c of value integer
 * @r: integer
 * Return: last digit of the number
 */
int print_last_digit(int r)
{
	int lastDigit = r % 10;

	lastDigit = lastDigit >= 0 ? lastDigit : -lastDigit;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
