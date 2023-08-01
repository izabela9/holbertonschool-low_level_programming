#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: first node
 * @index: place of the new node
 * Return: the nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0 ; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
	head = head->next;
	}
	return (head);
}
