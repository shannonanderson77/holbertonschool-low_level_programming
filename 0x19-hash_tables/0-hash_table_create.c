#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of hash table created
 * Return: a pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;

new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
	{
	return (NULL);
	}
new_table->size = size;
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
	{
	free(new_table);
	return (NULL);
	}
return (new_table);
}
