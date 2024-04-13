#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash t data str of hash
 * @key: key str
 * @value: the value corresponding to the key
 * Return: 1 if it succeded, 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
