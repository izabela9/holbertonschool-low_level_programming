#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: head node
 * @n: n value to add to the new node
 * Return: addres of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if ((*head) == NULL)
		*head = new;
	else
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
