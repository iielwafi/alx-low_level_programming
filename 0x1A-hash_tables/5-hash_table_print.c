#include "hash_tables.h"

/**
 * hash_table_print - prints the table hash
 * @ht: the hash table of this task
 * Return: non
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *item;
	int first_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		item = ht->array[i];
		if (item == NULL)
			continue;
		if (first_flag <= 1)
			first_flag++;
		while (item)
		{
			if (first_flag == 2)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			item = item->next;
		}
	}
	printf("}\n");
}
