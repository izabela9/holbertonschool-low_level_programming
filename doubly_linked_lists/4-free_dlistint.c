#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function that frees list
 * @head: first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_dlistint(head->next);
	}
	free(head);
}
