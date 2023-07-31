#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all elements of a list
 * @h: header node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] nill\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
