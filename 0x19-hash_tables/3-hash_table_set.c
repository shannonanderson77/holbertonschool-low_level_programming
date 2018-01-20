#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to a hash table
 * @ht: pointer to head of hash table
 * @key: key for new element
 * @value: value for new element
 * Return: 1 if successful, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* check for collission */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		temp_node = temp_node->next;
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
	}
	/* if no collission add new_node to table at index */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
