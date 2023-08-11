#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_print - get node
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;
			flag = 1;
		}
	}
	printf("}\n");
}
