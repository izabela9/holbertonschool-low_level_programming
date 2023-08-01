#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at idx position
 * @h: first node
 * @idx: index where the node should be added
 * @n: value to add to the new node
 * Return: adress of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp;
	unsigned int count;

	new_n = malloc(sizeof(dlistint_t));
	tmp = *h;

	for (count = 0; count < idx; count++)
	{
		if (h == NULL)
			return (NULL);

		new_n->prev = tmp;
		new_n->next = tmp->next->next;
		tmp->next = new_n;
		new_n->n = n;
		return (new_n);
	}
	return (NULL);
}
