#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - function that returns the number of elements in a list
 * @h: header node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
