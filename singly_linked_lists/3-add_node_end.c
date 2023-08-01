#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end
 * @head: pointer to a head node
 * @str: string value to the new node
 * Return: adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *new_end;

	new_end = malloc(sizeof(list_t));

	if (new_end == NULL)
	{
		free(new_end);
		return (NULL);
	}
	new_end->str = strdup(str);
	new_end->len = strlen(str);
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_end;
	}
	return (new_end);
}
