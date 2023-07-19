#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: function that selects the correct function
 * to perform the operation asked by the user
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (ops[i].op)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
