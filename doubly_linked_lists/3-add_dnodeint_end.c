#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: first node
 * @n: n value to the new node
 * Return: the adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *tmp;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;

	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_end->prev = tmp;
	tmp->next = new_end;

	return (new_end);
}
