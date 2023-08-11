#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - get node
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		if (curr != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				curr = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = curr;
			}
		}
	}
	free(ht->array);
	free(ht);
}
