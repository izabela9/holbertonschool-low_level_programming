#include "main.h"
/**
 * _abs - is a function that computes the apsolute value
 * @r : integer
 * Return: r the apsolute number
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
		return (r);
	}
	return (r);
}
