#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, s, sizeof(s) - 1);
	write(1, "\n", 1);

	return (1);
}
