#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node at index given
 *@head: head node
 *@index: index
 *Return: 1 if it succeeded and -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	unsigned int count;

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	del = tmp->next;
	tmp->next = del->next;

	if (del->next != NULL)
	{
		del->next->prev = del->prev;
		del->next = NULL;
		del->prev = NULL;
	}
	free(del);
return (1);
}
