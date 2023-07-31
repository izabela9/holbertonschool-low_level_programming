#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node in the beginning
 * @head: pointer to head node
 * @str: string value to the new node
 * Return: the adress of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(sizeof(char) * strlen(str));
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = (*head);
	*head = new_node;

	return (new_node);
}
